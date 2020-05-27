//
//  SignaturePlugin.m
//  Signature
//
//  Created by Gyorvari Gabor on 2015. 10. 06..
//  Copyright © 2015. Gyorvari Gabor. All rights reserved.
//

#import <AppKit/AppKit.h>
#import <objc/objc-runtime.h>
#import "SignaturePlugin.h"
#import "CodeInjector.h"
#import "MVMailBundle.h"

int LoggingLevel = 0;

@implementation SignaturePlugin

+ (void)initialize {
    // Make sure the initializer is only run once.
    // Usually is run, for every class inheriting from
    // GPGMailBundle.
    if(self != [SignaturePlugin class])
        return;
    
    Class mvMailBundleClass = NSClassFromString(@"MVMailBundle");
    // If this class is not available that means Mail.app
    // doesn't allow plugins anymore. Fingers crossed that this
    // never happens!
    if(!mvMailBundleClass)
        return;
    
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated"
    class_setSuperclass([self class], mvMailBundleClass);
#pragma GCC diagnostic pop
    
    // Initialize the bundle by swizzling methods, loading keys, ...
    SignaturePlugin *instance = [SignaturePlugin sharedInstance];
    
    [[((MVMailBundle *)self) class] registerBundle];             // To force registering composeAccessoryView and preferences
}

- (NSString *)version {
    return @"1.7";
}

- (id)init {
    if (self = [super init]) {
        NSLog(@"Loaded SignaturePlugin %@", [self version]);
        [CodeInjector injectUsingMethodPrefix:@"SP"];
    }
    return self;
}

// extract e-mail address from RFC822 email address format ex.: Jon Doe <jon@example.com>
+ (NSString *) extractEmailAddress: (NSString *)address
{
    NSRange r = [address rangeOfString:@"<" options:NSBackwardsSearch];
    NSString *senderEmail = [address substringFromIndex:r.location + 1];
    r = [senderEmail rangeOfString:@">" options:NSBackwardsSearch];
    return [senderEmail substringToIndex:r.location];
}


@end
