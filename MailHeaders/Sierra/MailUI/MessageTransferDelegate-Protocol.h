//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MessageTransfer, NSArray, NSError, NSUndoManager;

@protocol MessageTransferDelegate <NSObject>
- (void)messageTransferDidUndoTransferOfMessages:(NSArray *)arg1;
- (void)messageTransferDidTransferMessages:(NSArray *)arg1 withAnimationOptions:(unsigned long long)arg2;
- (void)messageTransferDidTransferMessages:(NSArray *)arg1;
- (void)unhideMessagesForMessageTransfer:(NSArray *)arg1;
- (void)hideMessagesForMessageTransfer:(NSArray *)arg1 selectingNextMessage:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)hideMessagesForMessageTransfer:(NSArray *)arg1 selectingNextMessage:(BOOL)arg2;
- (NSUndoManager *)undoManagerForMessageTransfer:(MessageTransfer *)arg1;
- (void)transfer:(MessageTransfer *)arg1 didCompleteWithError:(NSError *)arg2;
@end
