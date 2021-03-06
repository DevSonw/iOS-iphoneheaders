/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DuetLST/DuetLST-Structs.h>
@class NSObject, NSMutableArray, NSString;

@interface DuetLSTMiscResources : NSObject {

	bool isDeviceInVoiceCall;
	bool isDeviceUnderThermalPressure;
	bool isDeviceInGoodCellularCondition;
	bool isDeviceWifiConnected;
	NSObject<OS_dispatch_queue>* dQueue;
	int thermalStatusToken;
	int externTriggerToken;
	int ResourceChangeToken;
	CTServerConnectionRef serverConnection;
	NSMutableArray* keys;
	NSMutableArray* patterns;
	NSString* keyIPv4;
	NSString* keyIPv6;
	SCDynamicStoreRef dynamicStore;

}

@property (nonatomic,readonly) bool isDeviceInVoiceCall; 
@property (nonatomic,readonly) bool isDeviceUnderThermalPressure; 
@property (assign,nonatomic) bool isDeviceInGoodCellularCondition; 
@property (assign,nonatomic) bool isDeviceWifiConnected; 
@property (nonatomic,readonly) NSMutableArray * keys; 
@property (nonatomic,readonly) NSMutableArray * patterns; 
@property (nonatomic,readonly) NSString * keyIPv4; 
@property (nonatomic,readonly) NSString * keyIPv6; 
@property (nonatomic,readonly) SCDynamicStoreRef dynamicStore; 
-(bool)isDeviceInVoiceCall;
-(bool)isDeviceWifiConnected;
-(void)sendResourceChangeEventToAPLS;
-(void)registerCallStatusChange;
-(bool)hasResourcesAvailable;
-(void)sendExternalTriggerEventToAPLS:(unsigned long long)arg1 ;
-(void)updateInCallStatus:(bool)arg1 ;
-(void)setIsDeviceInGoodCellularCondition:(bool)arg1 ;
-(void)setIsDeviceWifiConnected:(bool)arg1 ;
-(id)patterns;
-(id)keyIPv4;
-(id)keyIPv6;
-(void)initNetworkLinkQualityMonitoring;
-(void)dealloc;
-(id)init;
-(id)keys;
-(bool)isDeviceUnderThermalPressure;
-(bool)isDeviceInGoodCellularCondition;
-(SCDynamicStoreRef)dynamicStore;
-(void).cxx_destruct;
@end

