//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSStackView, NSTimer;

@interface MessageListSearchProgressView : NSView
{
    NSStackView *_searchingStackView;
    NSArray *_orderedDotViews;
    NSTimer *_animationIntervalTimer;
}

@property(retain, nonatomic) NSTimer *animationIntervalTimer; // @synthesize animationIntervalTimer=_animationIntervalTimer;
@property(retain, nonatomic) NSArray *orderedDotViews; // @synthesize orderedDotViews=_orderedDotViews;
@property(nonatomic) __weak NSStackView *searchingStackView; // @synthesize searchingStackView=_searchingStackView;
- (void).cxx_destruct;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)_stopAnimationIntervalTimer;
- (void)_startAnimationIntervalTimer;
- (void)_animate:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end
