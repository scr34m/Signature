//
//  MailDocumentEditor+SignaturePLugin.m
//  Signature
//
//  Created by Gyorvari Gabor on 2015. 10. 06..
//  Copyright © 2015. Gyorvari Gabor. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "ComposeViewController+SignaturePlugin.h"
#import "../MailHeaders/Al_Capitan/MailUI/SignatureBundle.h"

@implementation ComposeViewController_SignaturePlugin : NSObject

+ (void) backEndSenderDidChange:(id)sender {
    ComposeViewController *editor = (ComposeViewController *)self;

    [editor orig_backEndSenderDidChange:(id)sender];

    // extract e-mail address from RFC822 email address format ex.: Jon Doe <jon@examile.com>
    NSRange r = [editor.backEnd.sender rangeOfString:@"<" options:NSBackwardsSearch];
    NSString *senderEmail = [editor.backEnd.sender substringFromIndex:r.location + 1];
    r = [senderEmail rangeOfString:@">" options:NSBackwardsSearch];
    senderEmail = [senderEmail substringToIndex:r.location];
    
//    NSString *senderEmail = [self extractEmailAddress:editor.backEnd.sender];

    NSInteger signatureIndex = -1;
    id signatureBundle = [[NSClassFromString(@"SignatureBundle") alloc] init];
    NSArray *signs = [signatureBundle signaturesForAccount:editor.backEnd.account];
    if ([signs count] > 0)
    {
       for (int sc = 0; sc<[signs count]; sc++)
       {
           Signature *s = [signs objectAtIndex:sc];
           // signature name is equal the sender e-mail then we found proper signature
           if ([s.signatureName isEqualToString:senderEmail]) {
               signatureIndex = sc;
               break;
           }
       }
    }

    // if signature found then switch to it
    if (signatureIndex != - 1) {
        [editor.backEnd setMessageSignature:(id)[signs objectAtIndex:signatureIndex]];
    }
}

+ (NSString *) extractEmailAddress:(NSString *)address {
    NSRange r = [address rangeOfString:@"<" options:NSBackwardsSearch];
    NSString *senderEmail = [address substringFromIndex:r.location + 1];
    r = [senderEmail rangeOfString:@">" options:NSBackwardsSearch];
    return [senderEmail substringToIndex:r.location];
}

@end