//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailbox;

@interface EMMailboxPredictionResult : NSObject
{
    MFMailbox *_predictedMailbox;
}

+ (id)resultWithMailbox:(id)arg1;
@property(retain, nonatomic) MFMailbox *predictedMailbox; // @synthesize predictedMailbox=_predictedMailbox;
- (void).cxx_destruct;

@end

