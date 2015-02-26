/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMDUIFMIPSettingsCache : NSObject {

	BOOL _fmipStateAvailable;
	BOOL _lowBatteryLocateStateAvailable;
	BOOL _lowBatteryLocateEnabled;
	unsigned long long _fmipState;

}

@property (assign,nonatomic) BOOL fmipStateAvailable;                          //@synthesize fmipStateAvailable=_fmipStateAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long fmipState;                     //@synthesize fmipState=_fmipState - In the implementation block
@property (nonatomic,readonly) BOOL fmipEnabled; 
@property (nonatomic,readonly) BOOL fmipStateChangeInProgress; 
@property (assign,nonatomic) BOOL lowBatteryLocateStateAvailable;              //@synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryLocateEnabled;                     //@synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)fmipStateAvailable;
-(unsigned long long)fmipState;
-(BOOL)fmipStateChangeInProgress;
-(BOOL)fmipEnabled;
-(BOOL)lowBatteryLocateEnabled;
-(BOOL)lowBatteryLocateStateAvailable;
-(void)_loadFMIPState;
-(void)_loadLowBatteryState;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 ;
-(void)setLowBatteryLocateStateAvailable:(BOOL)arg1 ;
-(void)setFmipState:(unsigned long long)arg1 ;
-(void)setFmipStateAvailable:(BOOL)arg1 ;
@end
