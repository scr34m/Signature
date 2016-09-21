//
//  CodeInjector.m
//  MailReceipt
//
//  Created by Gyorvari Gabor on 2016. 09. 16..
//  Copyright © 2016. Gyorvari Gabor. All rights reserved.
//

#import "CCLog.h"
#import "SignaturePlugin.pch"
#import "JRLPSwizzle.h"
#import "SignaturePlugin.h"
#import "CodeInjector.h"

@implementation CodeInjector

+ (NSDictionary *)commonHooks {
    return @{
             @"HeadersEditor": @[
                     @"awakeFromNib",
                     @"_updateSenderDomainAndAddressWithSender:accountIdentifier:"
                     ],
             };
}

+ (NSDictionary *)hooks {
    static dispatch_once_t onceToken;
    static NSDictionary *_hooks;
    
    dispatch_once(&onceToken, ^{
        NSMutableDictionary *hooks = [[NSMutableDictionary alloc] init];
        NSDictionary *commonHooks = [self commonHooks];
        
        // Make a mutable version of all the dictionary.
        for(NSString *class in commonHooks)
            hooks[class] = [NSMutableArray arrayWithArray:commonHooks[class]];

        _hooks = [NSDictionary dictionaryWithDictionary:hooks];
    });
    
    return _hooks;
}

+ (void)applyHookChangesForVersion:(NSString *)osxVersion toHooks:(NSMutableDictionary *)hooks {
    NSDictionary *hookChanges;
    
    for(NSString *class in hookChanges) {
        NSDictionary *hook = hookChanges[class];
        
        // Class was added.
        if(!hooks[class]) {
            // This check is necessary on older systems. 10.10+ has an additional check for nil value.
            // If hook[selectors] is nil, it would call removeObjectForKey instead of setObject:forKey.
            // Interestingly enough, this is done in the arclite implementation of the sdk this code is compiled on.
            // Setting hook[class] to hook[selectors] would crash on previous version if the code was compiled on 10.9 or lower
            // since no nil check was added in the arclite implementation of setObject:forKeyedSubscript:
            if(hook[@"selectors"]) {
                hooks[class] = hook[@"selectors"];
            }
            continue;
        }
        // Class was removed.
        if([hook[@"status"] isEqualToString:@"removed"]) {
            [hooks removeObjectForKey:class];
            continue;
        }
        // Selectors were updated
        if(hook[@"selectors"]) {
            for(NSString *action in hook[@"selectors"]) {
                for(id selector in hook[@"selectors"][action]) {
                    if([action isEqualToString:@"added"])
                        [(NSMutableArray *)hooks[class] addObject:selector];
                    else if([action isEqualToString:@"removed"]) {
                        NSMutableArray *tempHooks = [hooks[class] mutableCopy];
                        [tempHooks removeObject:selector];
                        hooks[class] = tempHooks;
                    }
                    else if([action isEqualToString:@"replaced"]) {
                        [(NSMutableArray *)hooks[class] removeObject:selector[0]];
                        [(NSMutableArray *)hooks[class] addObject:selector[1]];
                    }
                    else if([action isEqualToString:@"renamed"]) {
                        [(NSMutableArray *)hooks[class] removeObject:selector[0]];
                        [(NSMutableArray *)hooks[class] addObject:selector];
                    }
                }
            }
        }
        
        // Class was renamed.
        if([hook[@"status"] isEqualToString:@"renamed"]) {
            hooks[hook[@"name"]] = hooks[class];
            [hooks removeObjectForKey:class];
        }
    }
    
    
}

+ (NSString *)legacyClassNameForName:(NSString *)className {
    // Some classes have been renamed in Mavericks.
    // This methods converts known classes to their counterparts in Mavericks.
    if([@[@"MC", @"MF"] containsObject:[className substringToIndex:2]])
        return [className substringFromIndex:2];
    
    if([className isEqualToString:@"DocumentEditor"])
        return @"MailDocumentEditor";
    
    if([className isEqualToString:@"MessageViewController"])
        return @"MessageContentController";
    
    if([className isEqualToString:@"HeaderViewController"])
        return @"MessageHeaderDisplay";

    return className;
}

+ (void)injectUsingMethodPrefix:(NSString *)prefix hooks:(NSDictionary*)hooks{
    /**
     This method replaces all of Mail's methods which are necessary for GPGMail
     to work correctly.
     
     For each class of Mail that must be extended, a class with the same name
     and suffix _GPGMail (<ClassName>_GPGMail) exists which implements the methods
     to be relaced.
     On runtime, these methods are first added to the original Mail class and
     after that, the original Mail methods are swizzled with the ones of the
     <ClassName>_GPGMail class.
     
     swizzleMap contains all classes and methods which need to be swizzled.
     */
    
    NSString *extensionClassSuffix = @"SignaturePlugin";
    
    NSError * __autoreleasing error = nil;
    for(NSString *class in hooks) {
        NSString *oldClass = [[self class] legacyClassNameForName:class];
        error = nil;
        
        NSArray *selectors = hooks[class];
        
        Class mailClass = NSClassFromString(class);
        if(!mailClass) {
            CCLog(@"WARNING: Class %@ doesn't exist. This leads to unexpected behaviour!", class);
            continue;
        }
        
        // Check if a class exists with <class>_GPGMail. If that's
        // the case, all the methods of that class, have to be added
        // to the original Mail or Messages class.
        Class extensionClass = NSClassFromString([oldClass stringByAppendingFormat:@"_%@", extensionClassSuffix]);
        if(!extensionClass) {
            // In order to correctly hook classes on older versions of OS X than 10.9, the MC and MF prefix
            // is removed. There are however some cases, where classes where added to 10.9 which didn't exist
            // on < 10.9. In those cases, let's try to find the class with the appropriate prefix.
            
            // Try to find extensions to the original classname.
            extensionClass = NSClassFromString([class stringByAppendingFormat:@"_%@", extensionClassSuffix]);
        }
        BOOL extend = extensionClass != nil ? YES : NO;
        if(extend) {
            if(![mailClass jrlp_addMethodsFromClass:extensionClass error:&error])
                CCLog(@"WARNING: methods of class %@ couldn't be added to %@ - %@", extensionClass,
                         mailClass, error);
        }
        
        // And on to swizzling methods and class methods.
        for(id selectorNames in selectors) {
            // If the selector changed from one OS X version to the other, selectorNames is an NSArray and
            // the selector name of the GPGMail implementation is item 0 and the Mail implementation name is
            // item 1.
            NSString *gmSelectorName = [selectorNames isKindOfClass:[NSArray class]] ? selectorNames[0] : selectorNames;
            NSString *mailSelectorName = [selectorNames isKindOfClass:[NSArray class]] ? selectorNames[1] : selectorNames;
            
            error = nil;
            NSString *extensionSelectorName = [NSString stringWithFormat:@"%@%@%@", prefix, [[gmSelectorName substringToIndex:1] uppercaseString],
                                               [gmSelectorName substringFromIndex:1]];

            SEL selector = NSSelectorFromString(mailSelectorName);
            SEL extensionSelector = NSSelectorFromString(extensionSelectorName);
            // First try to add as instance method.
            if(![mailClass jrlp_swizzleMethod:selector withMethod:extensionSelector error:&error]) {
                // If that didn't work, try to add as class method.
                if(![mailClass jrlp_swizzleClassMethod:selector withClassMethod:extensionSelector error:&error])
                    CCLog(@"WARNING: %@ doesn't respond to selector %@", NSStringFromClass(mailClass),
                             NSStringFromSelector(selector));
            }
        }
    }
}

+ (void)injectUsingMethodPrefix:(NSString *)prefix {
    [self injectUsingMethodPrefix:prefix hooks:[self hooks]];
}
@end
