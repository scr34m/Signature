//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@interface MFListUnsubscribeSuggestionPopoverViewController : NSViewController
{
    CDUnknownBlockType _unsubscribeBlock;
    CDUnknownBlockType _ignoreBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ignoreBlock; // @synthesize ignoreBlock=_ignoreBlock;
@property(copy, nonatomic) CDUnknownBlockType unsubscribeBlock; // @synthesize unsubscribeBlock=_unsubscribeBlock;
- (void).cxx_destruct;
- (void)dismiss:(id)arg1;
- (void)unsubscribe:(id)arg1;

@end
