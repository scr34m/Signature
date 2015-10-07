//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface PrintingProgressPanelWindowController : NSWindowController
{
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressText;
    NSButton *_cancelButton;
}

@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSTextField *progressText; // @synthesize progressText=_progressText;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;
- (id)windowNibName;

@end

