//
//  MailDocumentEditor+SignaturePlugin.h
//  Signature
//
//  Created by Gyorvari Gabor on 2015. 10. 06..
//  Copyright © 2015. Gyorvari Gabor. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "../MailHeaders/Al_Capitan/MailUI/Signature.h"
#import "../MailHeaders/Al_Capitan/MailUI/ComposeBackEnd.h"
#import "../MailHeaders/Al_Capitan/MailFW/MFAccount.h"
#import "../MailHeaders/Al_Capitan/MailFW/MFDeliveryAccount.h"

@interface ComposeViewController_SignaturePlugin : NSObject
+ (void) backEndSenderDidChange:(id)sender;
@end

@interface ComposeViewController : NSObject
@property(retain, nonatomic) ComposeBackEnd *backEnd;
- (void) orig_backEndSenderDidChange:(id)arg1;
@end
