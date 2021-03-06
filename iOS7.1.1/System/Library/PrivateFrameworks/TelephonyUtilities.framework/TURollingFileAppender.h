/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAppender.h>

@protocol TUAppenderDelegate;
@class NSString, NSMutableString, NSFileHandle, NSTimer, NSObject;

@interface TURollingFileAppender : NSObject <TUAppender> {

	opaque_pthread_mutex_t _lock;
	NSString* _directory;
	NSString* _prefix;
	NSMutableString* _buffer;
	NSFileHandle* _fileHandle;
	NSTimer* _scheduledFlushTimer;
	dispatch_queue_sRef _backgroundQueue;
	NSObject<TUAppenderDelegate>* _appenderDelegate;

}
+(bool)sendDirectoryToCrashReporter:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)flush;
-(void)_flush;
-(void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7 ;
-(void)_rollAndZipIfNecessary;
-(id)_logFilePath;
-(void)_rollAndZip;
-(id)_logFileHandle;
-(void)_scheduleFlush;
-(void)_reloadFileHandles;
-(void)setAppenderDelegate:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 prefix:(id)arg2 ;
-(id)formattedDyldContextForBacktrace:(id)arg1 ;
@end

