//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class MCTaskHandler, NSError;

@interface MCTaskHandlerOperation : NSOperation
{
    MCTaskHandler *_handler;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) MCTaskHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;

@end

