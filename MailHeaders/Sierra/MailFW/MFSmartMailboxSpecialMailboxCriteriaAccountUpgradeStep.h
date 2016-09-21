//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSDictionary;

@interface MFSmartMailboxSpecialMailboxCriteriaAccountUpgradeStep : MFLibraryUpgradeStep
{
    NSDictionary *_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
}

+ (BOOL)requiredAfterBackbooting;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2 fromBackBooting:(char *)arg3;
+ (unsigned long long)targetVersion;
@property(copy, nonatomic) NSDictionary *syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL; // @synthesize syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL=_syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
- (void).cxx_destruct;
- (id)_fixV1V2PersistenceAccountURL:(id)arg1;
- (id)_fixCriteriaWithLegacyAccountURLs:(id)arg1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;

@end

