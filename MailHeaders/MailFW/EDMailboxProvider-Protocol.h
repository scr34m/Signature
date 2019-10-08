//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mail/EMMailboxTypeResolver-Protocol.h>

@class EMMailbox, EMObjectID, NSArray;
@protocol ECMailbox, EDMailboxProviderDelegate;

@protocol EDMailboxProvider <EMMailboxTypeResolver>
@property(nonatomic) __weak id <EDMailboxProviderDelegate> delegate;
- (id <ECMailbox>)legacyMailboxForObjectID:(EMObjectID *)arg1;
- (EMMailbox *)mailboxForObjectID:(EMObjectID *)arg1;
- (void)fetchMailboxes;
- (NSArray *)allMailboxes;
@end

