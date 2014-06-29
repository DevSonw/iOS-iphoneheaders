/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject<OS_dispatch_queue>* _callbackQueue;
	/*^block*/ id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	bool _needsResume;

}

@property (getter=isLoading,nonatomic,readonly) bool loading; 
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_performSnapshot;
-(void)_cleanupSnapshotCreator;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(bool)isLoading;
-(void).cxx_destruct;
-(void)_cancel;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
@end
