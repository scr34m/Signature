//
//  HeadersEditor+SignaturePlugin.m
//  Signature
//
//  Created by Gyorvari Gabor on 2016. 09. 21..
//  Copyright © 2016. Gyorvari Gabor. All rights reserved.
//

#import "SignaturePlugin.h"
#import "HeadersEditor+SignaturePlugin.h"
#import <MFSignature.h>
#import <MFSignatureManager.h>
#import <HeadersEditor.h>

@implementation HeadersEditor_SignaturePlugin
- (void)SP_updateSenderDomainAndAddressWithSender:(NSString *)address accountIdentifier:(NSString *)accountId{

    NSString *senderEmail = [SignaturePlugin extractEmailAddress:address];

#ifdef DEBUG
    NSLog(@"senderEmail: %@", senderEmail);
#endif

    HeadersEditor *editor = (HeadersEditor *)self;

    NSArray<NSMenuItem *> *items = [editor.signaturePopup itemArray];
    for (int i = 0; i<[items count]; i++)
    {
        NSMenuItem *item = [items objectAtIndex:i];
        #ifdef DEBUG
            NSLog(@"%i: %@", (int)i, [item title]);
        #endif
        if ([item.title isEqualToString:senderEmail]) {
            [editor.signaturePopup selectItemAtIndex:i];
            [editor changeSignature:editor.signaturePopup];
            break;
        }
    }
    

/*
    id signatureManager = [NSClassFromString(@"MFSignatureManager") sharedInstance];

    NSArray *signs = [signatureManager signaturesForAccount:editor.mailAccount];
    if ([signs count] > 0)
    {
        for (int sc = 0; sc<[signs count]; sc++)
        {
            NSLog(@"sign");

            MFSignature *s = [signs objectAtIndex:sc];
#ifdef DEBUG
            NSLog(@"%i: %@ %@", (int)sc, s.uniqueId, s.name);
#endif
            // signature name is equal the sender e-mail then we found proper signature
            if ([s.name isEqualToString:senderEmail]) {
#ifdef DEBUG
                NSLog(@"setMessageSignature: %@", s.uniqueId);
#endif
                // if signature found then switch to it
                // [editor.backEnd setMessageSignature:s];
                // [editor changeSignature:s];
                break;
            }

        }
    }
*/
    [self SP_updateSenderDomainAndAddressWithSender:address accountIdentifier:accountId];
}

- (void)SPAwakeFromNib {
    [self SPAwakeFromNib];
}
@end
