//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

#import "IMAPMessage.h"
#import "IMAPPersistedMessage.h"
#import "MCPersistentIDFetching.h"

@class MFLibraryCalendarEvent, MFLibraryStore, MFMailAccount, MFMailbox, NSDate, NSString;

@interface MFLibraryMessage : MCMessage <IMAPMessage, IMAPPersistedMessage, MCPersistentIDFetching>
{
    long long _libraryID;
    MFLibraryStore *_dataSource;
    NSString *_remoteID;
    int _isCachingBodyAndHeaders;
    unsigned int _uid;
    CDStruct_07ba05d6 _remoteFlags;
    BOOL _hasSetCalendarEvent;
    BOOL _hasSetReferences;
    BOOL _isBeingChanged;
    BOOL _isCompacted;
    int _conversationPosition;
    unsigned int _options;
    long long _conversationID;
    long long _mailboxID;
    unsigned long long _messageSize;
}

+ (id)fetchedMessageWithRowID:(long long)arg1;
+ (id)messageWithPersistentID:(id)arg1;
+ (id)messageWithLibraryID:(long long)arg1;
+ (id)messageWithURL:(id)arg1;
+ (id)messagesWithURL:(id)arg1;
+ (id)_residentMessageForLibraryID:(long long)arg1;
+ (void)_removeMessageFromResidentMessagesWithLibraryID:(long long)arg1;
+ (id)_addMessageToResidentMessages:(id)arg1 overridingPreviousMessage:(BOOL)arg2;
+ (id)residentMessages;
+ (void)initialize;
@property BOOL isCompacted; // @synthesize isCompacted=_isCompacted;
@property unsigned int primitiveOptions; // @synthesize primitiveOptions=_options;
@property BOOL isBeingChanged; // @synthesize isBeingChanged=_isBeingChanged;
@property unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property int conversationPosition; // @synthesize conversationPosition=_conversationPosition;
@property long long conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)searchableItemWithHTML:(id)arg1 includingText:(BOOL)arg2;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;
- (id)cachedMessageBodyData;
- (void)_cacheMessageBodyIfPossible:(id)arg1;
- (id)cachedMessageBody;
- (void)_cacheHeaderDataIfPossible:(id)arg1;
- (id)cachedHeaderData;
- (void)_cacheHeadersIfPossible:(id)arg1;
- (id)cachedHeaders;
- (void)uncacheBodyAndHeader;
- (void)cacheBodyAndHeader;
- (void)appendData:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setAttachmentFilenames:(id)arg1;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (void)setRemoteID:(const char *)arg1 documentID:(id)arg2 flags:(long long)arg3 size:(unsigned long long)arg4 mailboxID:(long long)arg5 color:(char *)arg6 conversationID:(long long)arg7 conversationPosition:(int)arg8;
@property(readonly, nonatomic) MFMailAccount *account;
- (id)path;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)reload;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)_commitLater;
- (void)commit;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)setLibraryColor:(char *)arg1;
- (void)setColor:(id)arg1;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setFlags:(long long)arg1;
- (void)setMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property BOOL hasTemporaryUid;
@property BOOL partsHaveBeenCached;
- (BOOL)isPartialMessageBodyAvailable;
- (BOOL)isMessageContentLocallyAvailable;
@property BOOL isPartial;
- (BOOL)loadOptionsSuffice:(unsigned int)arg1;
@property unsigned int options;
@property(nonatomic) unsigned int uid;
@property(readonly) CDStruct_07ba05d6 remoteFlags;
- (void)setIMAPFlags:(CDStruct_07ba05d6)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSString *remoteID;
- (void)_setRemoteID:(id)arg1;
- (void)_updateUID;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)_unlockedMessageStore;
- (id)inReplyToHeaderDigest;
- (id)messageIDHeaderDigest;
- (id)to;
- (BOOL)supportsSnippets;
- (id)sender;
@property(readonly, copy) NSString *subject;
@property(retain) MFLibraryCalendarEvent *calendarEvent;
- (void)setReferences:(id)arg1;
- (id)references;
- (BOOL)type;
- (id)documentID;
@property(readonly, nonatomic) long long libraryID;
- (id)persistentID;
@property(readonly, copy, nonatomic) NSString *messageID;
- (void)dealloc;
- (id)init;
- (id)initWithLibraryID:(long long)arg1;

// Remaining properties
@property(readonly) NSDate *dateReceived;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly) Class superclass;

@end

