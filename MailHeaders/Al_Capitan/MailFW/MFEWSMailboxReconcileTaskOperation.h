//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSNetworkTaskOperation.h>

@class NSString;

@interface MFEWSMailboxReconcileTaskOperation : MFEWSNetworkTaskOperation
{
    id <MFEWSMailboxReconcileTaskOperationDelegate> _delegate;
    NSString *_folderIDString;
    NSString *_currentSyncState;
}

+ (long long)_maxChangesReturned;
+ (id)_newRequestWithFolderID:(id)arg1 syncState:(id)arg2;
@property(copy, nonatomic) NSString *currentSyncState; // @synthesize currentSyncState=_currentSyncState;
@property(readonly, copy, nonatomic) NSString *folderIDString; // @synthesize folderIDString=_folderIDString;
@property(nonatomic) __weak id <MFEWSMailboxReconcileTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)_supportedClassForItem:(id)arg1;
- (void)main;
- (id)init;
- (id)initWithFolderIDString:(id)arg1 initialSyncState:(id)arg2;

@end

