//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSDateFormatter, NSFont;

@interface DateCell : NSTextFieldCell
{
    BOOL _forceTextColor;
    _Bool _lastStringWasRTL;
    long long _dateDetailLevel;
    double _lastWidth;
}

+ (void)_resetDateFormats:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool lastStringWasRTL; // @synthesize lastStringWasRTL=_lastStringWasRTL;
@property(nonatomic) double lastWidth; // @synthesize lastWidth=_lastWidth;
@property(nonatomic) long long dateDetailLevel; // @synthesize dateDetailLevel=_dateDetailLevel;
@property(nonatomic) BOOL forceTextColor; // @synthesize forceTextColor=_forceTextColor;
- (void)_updateDateColumnDetailLevels;
- (void)_updateDateColumnDetailLevelWidths;
- (BOOL)_readWidthsFromDefaults;
- (void)_saveWidthsToDefaults;
- (id)_newWeekdayWidthReferenceDatesFirstWeekday:(unsigned long long *)arg1;
- (id)_newMonthWidthReferenceDates;
- (double)_widthOfLongestDateStringWithLevel:(long long)arg1 format:(id)arg2;
- (double)_widthOfStringWithTimeFormat:(id)arg1 withDatePrefix:(id)arg2;
@property(retain, nonatomic) NSFont *lastFont;
- (void)setDrawingAttributes:(id)arg1;
- (id)drawingAttributes;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (id)accessibilityValue;
- (id)stringValue;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(readonly, nonatomic) double minimumWidth;
- (void)setObjectValue:(id)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
@property(nonatomic) BOOL underlinesText;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
@property(retain) NSDateFormatter *formatter;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_initDateFormatter;
- (void)awakeFromNib;
- (void)_dateCellCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end
