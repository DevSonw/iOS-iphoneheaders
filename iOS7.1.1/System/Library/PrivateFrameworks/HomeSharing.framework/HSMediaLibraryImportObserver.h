/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HSMediaLibraryImportObserverDelegate;
@class NSTimer;

@interface HSMediaLibraryImportObserver : NSObject {

	NSTimer* _updateTimer;
	unsigned long long _consecutiveUpdateFailures;
	bool _stopped;
	bool _updating;
	<HSMediaLibraryImportObserverDelegate>* _delegate;
	double _updateInterval;

}

@property (assign,nonatomic) <HSMediaLibraryImportObserverDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isUpdating,nonatomic,readonly) bool updating;                              //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) double updateInterval;                                          //@synthesize updateInterval=_updateInterval - In the implementation block
-(bool)isUpdating;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)stopUpdating;
-(void)_updateImportStatus:(id)arg1 ;
-(void)beginUpdating;
@end
