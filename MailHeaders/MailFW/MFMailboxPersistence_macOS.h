//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence
{
    EDPersistenceDatabase *_database;
}

@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2;

@end

