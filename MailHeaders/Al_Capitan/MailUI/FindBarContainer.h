//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSTextFinderBarContainer.h"

@class NSString;

@interface FindBarContainer : NSView <NSTextFinderBarContainer>
{
    NSView *_findBarView;
    BOOL _findBarVisible;
    NSView *_containerView;
}

@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)_layoutSubviews;
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (id)contentView;
- (void)findBarViewDidChangeHeight;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

