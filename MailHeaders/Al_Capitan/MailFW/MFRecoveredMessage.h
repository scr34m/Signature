//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

@class MCMessageHeaders, MCMimeBody, MFMailAccount, MFMailbox, NSArray, NSData, NSString, NSURL;

@interface MFRecoveredMessage : MCMessage
{
    MCMessageHeaders *_headers;
    CDStruct_07ba05d6 _remoteFlags;
    NSData *_bodyData;
    NSData *_allData;
    MCMimeBody *_messageBody;
    NSString *_remoteID;
    id _remoteIDLock;
    BOOL _loadedFileData;
    NSURL *_url;
    NSString *_remoteMailboxURL;
    NSArray *_gmailLabelIDs;
    NSString *_persistentID;
}

+ (id)searchableItemForBodyData:(id)arg1 plistData:(id)arg2 path:(id)arg3 persistentID:(long long)arg4;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) BOOL loadedFileData; // @synthesize loadedFileData=_loadedFileData;
@property(copy, nonatomic) NSArray *gmailLabelIDs; // @synthesize gmailLabelIDs=_gmailLabelIDs;
@property(copy, nonatomic) NSString *remoteMailboxURL; // @synthesize remoteMailboxURL=_remoteMailboxURL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)_systemAccountWithRelativeMailboxPath:(id *)arg1;
- (id)_mailboxURLFromAccount:(id)arg1 relativeMailboxPath:(id)arg2;
- (id)_mailboxIdentifierForAccount:(id)arg1 relativeMailboxPath:(id)arg2;
- (id)searchableItemWithHTML:(id)arg1 includingText:(BOOL)arg2;
- (id)description;
- (BOOL)setMessageID:(long long)arg1 directory:(id)arg2;
- (void)flushCachedData;
- (CDStruct_76a5ddda)moreMessageFlags;
- (unsigned int)messageFlags;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFMailAccount *account;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyForIndexing;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)headersIfAvailable;
- (id)headers;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)remoteMailboxURLString;
- (id)messageID;
- (id)remoteID;
- (void)_parseBodyDataWithPList:(id)arg1;
- (void)_parseFileData:(id)arg1;
- (void)_loadFileDataIfNeeded;
- (id)_extendedAttributes;
- (id)path;
- (id)init;
- (id)_initWithURL:(id)arg1 bodyData:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

