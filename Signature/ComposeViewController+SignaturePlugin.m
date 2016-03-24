//
//  MailDocumentEditor+SignaturePLugin.m
//  Signature
//
//  Created by Gyorvari Gabor on 2015. 10. 06..
//  Copyright © 2015. Gyorvari Gabor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "SignaturePlugin.h"
#import "ComposeViewController+SignaturePlugin.h"
#import "../MailHeaders/Al_Capitan/MailUI/SignatureBundle.h"

@implementation ComposeViewController_SignaturePlugin

+ (void) backEndSenderDidChange:(id)sender {
    ComposeViewController *editor = (ComposeViewController *)self;

    [editor orig_backEndSenderDidChange:(id)sender];

    NSString *senderEmail = [SignaturePlugin extractEmailAddress:editor.backEnd.sender];
#ifdef DEBUG
    NSLog(@"senderEmail: %@", senderEmail);
#endif
    
    id signatureBundle = [[NSClassFromString(@"SignatureBundle") alloc] init];
    NSArray *signs = [signatureBundle signaturesForAccount:editor.backEnd.account];
    if ([signs count] > 0)
    {
       for (int sc = 0; sc<[signs count]; sc++)
       {
           Signature *s = [signs objectAtIndex:sc];
#ifdef DEBUG
           NSLog(@"%i: %@ %@", (int)sc, s.uniqueId, s.signatureName);
#endif
           // signature name is equal the sender e-mail then we found proper signature
           if ([s.signatureName isEqualToString:senderEmail]) {
#ifdef DEBUG
               NSLog(@"setMessageSignature: %@", s.uniqueId);
#endif
               // if signature found then switch to it
               [editor.backEnd setMessageSignature:s];
               break;
           }
       }
    }
    
}

@end