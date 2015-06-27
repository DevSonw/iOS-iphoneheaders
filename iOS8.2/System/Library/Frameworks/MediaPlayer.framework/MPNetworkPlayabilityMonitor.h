/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPNetworkPlayabilityMonitor : NSObject {

	int _effectiveNetworkTypeForCloudPlayback;
	double _lastAverageBitrate;
	int _networkType;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) double lastAverageBitrate; 
@property (nonatomic,readonly) int networkType; 
@property (nonatomic,readonly) int effectiveNetworkTypeForPlayback; 
+(id)sharedNetworkPlayabilityMonitor;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(int)networkType;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(int)effectiveNetworkTypeForPlayback;
-(double)lastAverageBitrate;
-(void)dealloc;
-(id)init;
@end
