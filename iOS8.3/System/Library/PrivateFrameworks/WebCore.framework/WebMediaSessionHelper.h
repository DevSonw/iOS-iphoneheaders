/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:19:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebMediaSessionHelper : NSObject {

	MediaSessionManageriOS* _callback;
	RetainPtr<MPVolumeView>* _volumeView;
	RetainPtr<MPAVRoutingController>* _airPlayPresenceRoutingController;

}
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)initWithCallback:(MediaSessionManageriOS*)arg1 ;
-(void)clearCallback;
-(char)hasWirelessTargetsAvailable;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)wirelessRoutesAvailableDidChange:(id)arg1 ;
-(void)interruption:(id)arg1 ;
-(void)allocateVolumeView;
@end

