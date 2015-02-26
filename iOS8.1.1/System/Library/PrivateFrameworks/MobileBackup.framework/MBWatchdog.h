/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface MBWatchdog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _interval;
	double _timeoutInterval;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timeoutQueue;
	BOOL _scheduled;
	BOOL _running;

}

@property (assign) double interval;                     //@synthesize interval=_interval - In the implementation block
@property (assign) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (copy) id timeoutCallback;                    //@synthesize callback=_callback - In the implementation block
-(void)scheduleInQueue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setTimeoutCallback:(id)arg1 ;
-(double)timeoutInterval;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
@end
