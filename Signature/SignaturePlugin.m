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
#import "ComposeViewController+SignaturePlugin.h"

@implementation SignaturePlugin

+ (void)initialize {
    
    if (!swizzle(@"ComposeViewController", @"ComposeViewController_SignaturePlugin", @selector(backEndSenderDidChange:), @selector(orig_backEndSenderDidChange:))) {
        return;
    }

    NSLog(@"SampleMailPlugin successfully Loaded");
}

// NSStringFromSelector(@"doWork")
IMP swizzle(NSString *srcn, NSString *dstn, SEL sel_old, SEL sel_new)
{
    Class src = NSClassFromString(srcn);
    if(!src) {
        NSLog(@"Mail.app does not have a %@ class available", srcn);
        return NULL;
    }
    
    Class dst = NSClassFromString(dstn);
    if(!dst) {
        NSLog(@"Plugin does not have a %@ class available", dstn);
        return  NULL;
    }
    
    Method new_send = class_getClassMethod(dst, sel_old);
    if (!new_send) {
        NSLog(@"Could not find selector in class %@", dstn);
        return NULL;
    }
    
    Method old_send = class_getInstanceMethod(src, sel_old);
    if (!old_send) {
        NSLog(@"Could not find selector in class %@", srcn);
        return NULL;
    }
    
    class_addMethod(src, sel_old, method_getImplementation(old_send), method_getTypeEncoding(old_send));
    class_addMethod(src, sel_new, method_getImplementation(old_send), method_getTypeEncoding(old_send));
    
    old_send = class_getInstanceMethod(src, sel_old);
    if (!old_send) {
        NSLog(@"Could not find relplaced selector again");
        return NULL;
    }
    
    return method_setImplementation(old_send, method_getImplementation(new_send));
}

@end
