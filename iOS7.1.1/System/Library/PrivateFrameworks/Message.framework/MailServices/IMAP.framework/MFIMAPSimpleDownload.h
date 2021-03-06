/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFIMAPDownload.h>

@class NSString, NSError;

@interface MFIMAPSimpleDownload : MFIMAPDownload {

	NSString* _section;
	NSError* _error;
	unsigned long long _length;
	unsigned _knownLength : 1;
	unsigned _complete : 1;
	NSRange _range;
	unsigned long long _originalDataLength;
	unsigned long long _offsetAdjustment;

}
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)section;
-(unsigned long long)bytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(bool)arg4 range:(NSRange)arg5 consumer:(id)arg6 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)initWithUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
-(bool)isComplete;
-(unsigned long long)expectedLength;
-(id)error;
@end

