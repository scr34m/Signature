//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageConsumer.h"
#import "MFQueryProgressMonitor.h"

@class NSArray, NSMutableArray, NSString;

@interface _MFMessageCollector : NSObject <MFMessageConsumer, MFQueryProgressMonitor>
{
    NSMutableArray *_messages;
    BOOL _didCancel;
}

@property(nonatomic) BOOL didCancel; // @synthesize didCancel=_didCancel;
- (void).cxx_destruct;
- (void)finishedSendingMessages;
@property(readonly) BOOL shouldCancel;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 options:(id)arg3;
@property(readonly, copy, nonatomic) NSArray *messages;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *libraryNotificationMessages;
@property(readonly, nonatomic) id libraryNotificationObject;
@property(readonly) Class superclass;

@end

