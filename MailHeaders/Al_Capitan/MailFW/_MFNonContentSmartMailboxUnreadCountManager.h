//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSTimer;

@interface _MFNonContentSmartMailboxUnreadCountManager : NSObject
{
    NSOperationQueue *_workQueue;
    NSMutableDictionary *_unreadLibraryIDsByMessageIDHeaderByMailbox;
    double _lastDisplayUpdateTime;
    BOOL _isObserving;
    NSTimer *_relativeDateTimer;
}

- (void).cxx_destruct;
- (void)_updateSmartMailbox:(id)arg1 withCompleteMessageList:(id)arg2 setDisplayCounts:(BOOL)arg3;
- (void)_smartMailboxLoaded:(id)arg1;
- (void)_refreshRelativeDateMailboxes:(id)arg1;
- (void)_messagesNeedRefresh:(id)arg1;
- (void)_messagesCompacted:(id)arg1;
- (void)_messagesChanged:(id)arg1;
- (void)_refreshForMailboxes:(id)arg1;
- (void)_setDisplayCounts;
- (void)_stopObservingNotifications;
- (void)_startObservingNotifications;
- (void)updateSmartMailboxes;
- (id)_messageIDHeaderKeyForMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

