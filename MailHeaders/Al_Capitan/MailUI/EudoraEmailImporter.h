//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilesystemEmailImporter.h"

@interface EudoraEmailImporter : FilesystemEmailImporter
{
}

+ (id)explanatoryText;
+ (id)name;
- (BOOL)isAttachmentBeingSearchedFor:(id)arg1;
- (id)_attachmentsInEudoraMessage:(id)arg1;
- (void)_stripTag:(char *)arg1 fromData:(id)arg2;
- (struct _NSRange)_rangeOfDataContainedByTag:(char *)arg1 endTag:(char *)arg2 inData:(id)arg3;
- (id)preProcessSourceData:(id)arg1;
- (BOOL)isValidMailbox:(id)arg1;
- (char *)fromString;

@end

