//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@class MCAttachment;

@interface MCAttachmentWrappingTextAttachment : NSTextAttachment
{
    MCAttachment *_messageAttachment;
}

@property(readonly, nonatomic) MCAttachment *messageAttachment; // @synthesize messageAttachment=_messageAttachment;
- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithAttachment:(id)arg1;

@end

