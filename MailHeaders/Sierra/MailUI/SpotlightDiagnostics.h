//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpotlightDiagnostics : NSObject
{
}

+ (unsigned long long)_checkMessages:(id)arg1 passedDiagnosticString:(id *)arg2 failedDiagnosticString:(id *)arg3;
+ (void)_handleValidationFailureWithDiagnosticString:(id)arg1 failedMessagesCount:(unsigned long long)arg2;
+ (id)_randomMessagesFromMailbox:(id)arg1 sinceCutoffDate:(id)arg2 sampleSize:(unsigned long long)arg3;
+ (BOOL)_performValidationWithActivity:(id)arg1;
+ (id)_validationActivity;
+ (void)scheduleValidation;
+ (id)diagnosticStringForMessages:(id)arg1;

@end

