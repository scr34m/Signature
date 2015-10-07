//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCDiscretionaryWorkScheduler : NSObject
{
    id _schedulerLock;
    unsigned long long _conditions;
    unsigned long long _unsatisfiedConditions;
    BOOL _overrideConditions;
    id <MCNetworkTracker> _networkTracker;
    BOOL _hasDeferrableWork;
    BOOL _suspended;
}

+ (id)keyPathsForValuesAffectingDeferDiscretionaryWork;
@property BOOL suspended; // @synthesize suspended=_suspended;
@property BOOL hasDeferrableWork; // @synthesize hasDeferrableWork=_hasDeferrableWork;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) BOOL deferDiscretionaryWork;
@property BOOL overrideConditions; // @synthesize overrideConditions=_overrideConditions;
- (void)_conditions:(unsigned long long)arg1 becameSatified:(BOOL)arg2;
@property(readonly) unsigned long long unsatisfiedConditions;
- (void)_stopTrackingConditions:(unsigned long long)arg1;
- (void)_startTrackingConditions:(unsigned long long)arg1;
@property unsigned long long conditions;
@property(nonatomic) __weak id <MCNetworkTracker> networkTracker;
- (void)dealloc;
- (id)init;

@end

