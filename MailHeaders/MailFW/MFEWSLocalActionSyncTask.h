//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/MFEWSTask.h>

#import <Mail/MFEWSGetNewMessageActionsOperationDelegate-Protocol.h>
#import <Mail/MFEWSMessageActionSyncOperationDelegate-Protocol.h>
#import <Mail/MFEWSPersistActionResultsOperationDelegate-Protocol.h>

@class ECLocalMessageActionResults, NSMutableArray, NSMutableDictionary, NSString;

@interface MFEWSLocalActionSyncTask : MFEWSTask <MFEWSGetNewMessageActionsOperationDelegate, MFEWSMessageActionSyncOperationDelegate, MFEWSPersistActionResultsOperationDelegate>
{
    NSMutableArray *_messageActions;
    NSMutableDictionary *_progressesByActionIDs;
    BOOL _actionOperationRunning;
    BOOL _needToCheckForActions;
    BOOL _needToPersistResults;
    ECLocalMessageActionResults *_resultsToPersist;
}

@property(retain, nonatomic) ECLocalMessageActionResults *resultsToPersist; // @synthesize resultsToPersist=_resultsToPersist;
@property(nonatomic) BOOL needToPersistResults; // @synthesize needToPersistResults=_needToPersistResults;
@property(nonatomic) BOOL needToCheckForActions; // @synthesize needToCheckForActions=_needToCheckForActions;
@property(nonatomic) BOOL actionOperationRunning; // @synthesize actionOperationRunning=_actionOperationRunning;
- (void).cxx_destruct;
- (void)_createProgressForAction:(id)arg1;
- (void)persistActionResultsOperationCompleted:(id)arg1 needToReplayAction:(BOOL)arg2;
- (void)messageActionSyncOperationCompleted:(id)arg1 results:(id)arg2;
- (void)getNewMessageActionsOperation:(id)arg1 didGetActions:(id)arg2;
- (void)end;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)recalculatePriorities;
- (void)addLocalAction:(id)arg1;
- (void)checkForNewMessageActions;
- (id)init;
- (id)initWithAccountName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

