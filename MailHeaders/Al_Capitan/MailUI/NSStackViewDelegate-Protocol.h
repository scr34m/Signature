//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSStackView;

@protocol NSStackViewDelegate <NSObject>

@optional
- (void)stackView:(NSStackView *)arg1 didReattachViews:(NSArray *)arg2;
- (void)stackView:(NSStackView *)arg1 willDetachViews:(NSArray *)arg2;
@end

