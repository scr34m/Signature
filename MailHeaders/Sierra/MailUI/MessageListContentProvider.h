//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ThreadedMessageListDelegate.h"

@class MCMessage, MFMessageThread, MessageListContentProviderOptions, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSOperationQueue, NSPredicate;

@interface MessageListContentProvider : NSObject <ThreadedMessageListDelegate>
{
    int _taskCounter;
    NSMutableArray *_allStores;
    NSMutableSet *_storesWaitingToLoad;
    NSMutableSet *_primaryMessages;
    NSMutableSet *_secondaryMessages;
    NSMutableSet *_nonDeletedMessages;
    NSMutableSet *_hiddenMessages;
    NSMutableSet *_shownMessages;
    NSMutableDictionary *_conversationIDByMessage;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableDictionary *_originalMessageByMessageID;
    NSMutableDictionary *_messageCopiesByMessageID;
    NSMutableSet *_pendingSelectedMessageIdentifiers;
    NSMutableSet *_pendingSelectedThreadIdentifiers;
    NSMutableSet *_pendingOpenThreadIdentifiers;
    NSMutableDictionary *_foundSelectedMessagesByIdentifier;
    NSMutableDictionary *_foundSelectedThreadsByIdentifier;
    MFMessageThread *_foundPinnedThread;
    MCMessage *_foundPinnedMessage;
    NSMutableSet *_changedMessages;
    NSMutableSet *_changedThreads;
    NSMutableArray *_contentChanges;
    BOOL _animateFoundSelection;
    BOOL _taskRequiresReload;
    BOOL _taskChangedOriginalsOrCopies;
    id <MessageListContentProviderDelegate> _delegate;
    MessageListContentProviderOptions *_options;
    id <MessageList> _messageList;
    NSOperationQueue *_taskQueue;
    id _pendingPinnedMessageIdentifier;
    NSNumber *_pendingPinnedThreadIdentifier;
    double _pendingPinningOffset;
    CDUnknownBlockType _taskCompletionBlock;
}

+ (id)log;
@property(nonatomic) BOOL taskChangedOriginalsOrCopies; // @synthesize taskChangedOriginalsOrCopies=_taskChangedOriginalsOrCopies;
@property(nonatomic) BOOL taskRequiresReload; // @synthesize taskRequiresReload=_taskRequiresReload;
@property(copy, nonatomic) CDUnknownBlockType taskCompletionBlock; // @synthesize taskCompletionBlock=_taskCompletionBlock;
@property(nonatomic) BOOL animateFoundSelection; // @synthesize animateFoundSelection=_animateFoundSelection;
@property(nonatomic) double pendingPinningOffset; // @synthesize pendingPinningOffset=_pendingPinningOffset;
@property(retain, nonatomic) NSNumber *pendingPinnedThreadIdentifier; // @synthesize pendingPinnedThreadIdentifier=_pendingPinnedThreadIdentifier;
@property(copy, nonatomic) id pendingPinnedMessageIdentifier; // @synthesize pendingPinnedMessageIdentifier=_pendingPinnedMessageIdentifier;
@property(readonly, nonatomic) NSOperationQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) id <MessageList> messageList; // @synthesize messageList=_messageList;
@property(readonly, copy, nonatomic) MessageListContentProviderOptions *options; // @synthesize options=_options;
@property __weak id <MessageListContentProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)threadedMessageList:(id)arg1 messageWillChange:(id)arg2;
- (void)threadedMessageList:(id)arg1 willRemoveThread:(id)arg2 withConversationID:(id)arg3;
- (void)threadedMessageList:(id)arg1 willAddThread:(id)arg2 withConversationID:(id)arg3;
- (void)threadedMessageList:(id)arg1 willRemoveMessage:(id)arg2;
- (void)threadedMessageList:(id)arg1 willAddMessage:(id)arg2 withConversationID:(id)arg3;
- (void)messageList:(id)arg1 didUpdateWithContentChange:(id)arg2;
- (id)threadForMessage:(id)arg1;
- (id)conversationIDForMessage:(id)arg1;
- (id)threadForConversationID:(id)arg1;
- (long long)sortingUniqueIdentifierForMessageThread:(id)arg1;
- (id)_messagesIncludingHiddenCopies:(id)arg1;
- (long long)sortingMessageFlagsForMessage:(id)arg1 appliedFlagColors:(id *)arg2;
- (long long)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (unsigned long long)sortingSizeForMessage:(id)arg1;
- (unsigned long long)sizeForMessage:(id)arg1;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (id)arrayOfSortOrders;
- (unsigned int)_loadOptions;
- (id)_updateCopiesInfoForMessages:(id)arg1;
- (void)_extractMessages:(id)arg1 animate:(BOOL)arg2;
- (void)_checkForPendingMessages:(id)arg1;
- (void)_insertPrimaryMessages:(id)arg1 secondaryMessages:(id)arg2;
- (void)_performTask:(CDUnknownBlockType)arg1;
- (id)_collectTaskInfo;
- (void)_clearTaskSpecificInfo;
- (id)_originalForMessage:(id)arg1;
- (BOOL)_shouldAlwaysShowDuplicates;
- (BOOL)_shouldDisplayMessage:(id)arg1;
- (void)_componentStoreMessagesWereAdded:(id)arg1;
- (void)_componentStoreFinishedLoading:(id)arg1;
- (void)_removeMessages:(id)arg1;
- (void)_addMessages:(id)arg1 secondaryMessages:(id)arg2;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (void)_libraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (BOOL)_isKnownMessage:(id)arg1;
- (id)_knownAndUnknownMessages:(id)arg1 fromMessages:(id)arg2;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (void)getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)closeAllThreads;
- (void)closeThreads:(id)arg1 selectingThread:(id)arg2;
- (void)openAllThreads;
- (void)openThreads:(id)arg1;
- (void)unhideMessages:(id)arg1;
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)changeFilterPredicate:(id)arg1;
- (void)_rebuild;
- (void)hideDeletedMessages;
- (void)showDeletedMessages;
- (void)ungroupMessages;
- (void)groupMessages;
- (void)_findPendingObjectsInList;
- (void)invertWithViewingState:(id)arg1;
- (void)resortWithSortOrder:(id)arg1 isOrderedAscending:(BOOL)arg2 viewingState:(id)arg3;
- (id)_newMessageList;
- (void)_clearAllMessageInfo;
- (void)_unrollViewingState:(id)arg1;
- (void)loadWithViewingState:(id)arg1;
- (void)_dumpDiagnosticInfo;
- (void)unregisterForNotifications;
- (id)init;
- (id)initWithStores:(id)arg1 options:(id)arg2;

@end

