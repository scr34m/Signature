//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@interface SubjectHeaderTextView : NSTextView
{
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (BOOL)requiresConstraintBasedLayout;
- (void)updateConstraints;
- (void)_subjectHeaderTextViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

