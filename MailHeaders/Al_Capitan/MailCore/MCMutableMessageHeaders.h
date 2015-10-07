//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCMessageHeaders.h>

@class NSMutableArray, NSMutableDictionary;

@interface MCMutableMessageHeaders : MCMessageHeaders
{
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

- (void).cxx_destruct;
- (void)addFromSpaceIfMissing;
- (void)removeHeaderForKey:(id)arg1;
- (void)setMessageIDList:(id)arg1 forKey:(id)arg2;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (id)encodedHeadersIncludingFromSpace:(BOOL)arg1;
- (id)_firstMessageIDForKey:(id)arg1 sender:(id)arg2;
- (id)messageIDListForKey:(id)arg1;
- (id)_firstAddressForKey:(id)arg1 sender:(id)arg2;
- (id)addressListForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)_headersForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)allHeaderKeys;
- (id)description;
- (id)debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

