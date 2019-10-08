//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ACAccount, NSImage, NSPopUpButton, NSString;

@interface AccountInformationController : NSViewController
{
    BOOL _accountNeedsSaving;
    BOOL _allowEventDonationConsent;
    NSImage *_accountStatusImage;
    NSString *_accountStatusDescription;
    NSPopUpButton *_emailAddressesPopUp;
    long long _lastSelectedEmailAddressIndex;
}

+ (id)keyPathsForValuesAffectingAccountIsEnabled;
+ (id)keyPathsForValuesAffectingAccountDescription;
@property(nonatomic) BOOL allowEventDonationConsent; // @synthesize allowEventDonationConsent=_allowEventDonationConsent;
@property(nonatomic) long long lastSelectedEmailAddressIndex; // @synthesize lastSelectedEmailAddressIndex=_lastSelectedEmailAddressIndex;
@property(nonatomic) BOOL accountNeedsSaving; // @synthesize accountNeedsSaving=_accountNeedsSaving;
@property(nonatomic) __weak NSPopUpButton *emailAddressesPopUp; // @synthesize emailAddressesPopUp=_emailAddressesPopUp;
@property(copy, nonatomic) NSString *accountStatusDescription; // @synthesize accountStatusDescription=_accountStatusDescription;
@property(retain, nonatomic) NSImage *accountStatusImage; // @synthesize accountStatusImage=_accountStatusImage;
- (void).cxx_destruct;
- (void)_didEditEmailAliases:(id)arg1;
- (void)_prepareToEditEmailAliases:(id)arg1;
- (id)_aliasesBySettingDefaultAlias:(id)arg1 inAliases:(id)arg2;
- (void)emailAddressesPopUpClicked:(id)arg1;
- (void)_emailAddressesPopUpWillPop:(id)arg1;
- (void)_updateEmailAddressesPopUp;
- (void)_didUpdateAccountStatus:(id)arg1;
- (void)setUpUIForAccount:(id)arg1;
@property(nonatomic) BOOL accountIsEnabled;
@property(readonly, nonatomic) BOOL canEnableAccount;
@property(copy) NSString *accountDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dismissViewController:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
@property(retain) ACAccount *representedObject;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

