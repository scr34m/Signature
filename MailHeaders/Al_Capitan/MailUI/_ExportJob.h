//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSPrintInfo, NSString;

@interface _ExportJob : NSObject
{
    BOOL _shouldCollapseRedundantText;
    NSArray *_conversationMembers;
    NSMutableArray *_printingHTMLs;
    NSMutableArray *_attachments;
    NSString *_jobTitle;
    NSPrintInfo *_printInfo;
    unsigned long long _sequenceNumber;
}

@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(retain, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSMutableArray *printingHTMLs; // @synthesize printingHTMLs=_printingHTMLs;
@property(nonatomic) BOOL shouldCollapseRedundantText; // @synthesize shouldCollapseRedundantText=_shouldCollapseRedundantText;
@property(retain, nonatomic) NSArray *conversationMembers; // @synthesize conversationMembers=_conversationMembers;
- (void).cxx_destruct;
- (id)init;

@end

