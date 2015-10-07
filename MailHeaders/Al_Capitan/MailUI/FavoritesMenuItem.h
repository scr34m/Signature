//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSImage, NSImageView;

@interface FavoritesMenuItem : NSTableCellView
{
    NSImageView *_menuStateImageView;
    long long _indentationLevel;
    NSImage *_image;
    NSImage *_alternateImage;
}

@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) __weak NSImageView *menuStateImageView; // @synthesize menuStateImageView=_menuStateImageView;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(readonly, nonatomic) double preferredWidth;

@end

