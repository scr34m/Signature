//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSImage, NSString;

@protocol MFUIMailbox <NSCopying, NSObject>
@property(readonly, nonatomic) NSImage *accountIcon;
@property(readonly, nonatomic) BOOL isAccountActive;
@property(readonly, nonatomic) BOOL isLocal;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, copy, nonatomic) NSString *accountURLString;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly, nonatomic) BOOL isStore;
@property(readonly, copy) NSArray *children;
@property(readonly) BOOL hasChildren;
@property(readonly) unsigned long long numberOfChildren;
@property(readonly) unsigned long long displayCount;
@property(readonly, nonatomic) BOOL isContainer;
@property(readonly, copy, nonatomic) NSString *extendedDisplayName;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *persistentIdentifier;
@property(readonly) BOOL isVisibleFlaggedMailbox;
@property int type;
- (BOOL)isDescendantOfMailboxWithType:(int)arg1;
@end

