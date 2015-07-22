/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Sharing/Sharing-Structs.h>
@class NSObject;

@interface SFWirelessSettingsController : NSObject {

	id _delegate;
	BOOL _wifiEnabled;
	BOOL _bluetoothEnabled;
	BOOL _deviceSupportsWAPI;
	BOOL _firstCallbackCompleted;
	BOOL _wirelessAccessPointEnabled;
	SFOperationRef _information;
	NSObject*<OS_dispatch_semaphore> _firstCallBackSemaphore;

}

@property (__weak) id<SFWirelessSettingsControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled; 
@property (getter=isWifiEnabled) BOOL wifiEnabled; 
@property (getter=isWirelessAccessPointEnabled,readonly) BOOL wirelessAccessPointEnabled; 
@property (readonly) BOOL deviceSupportsWAPI; 
-(BOOL)isWifiEnabled;
-(void)dealloc;
-(void)setDelegate:(id<SFWirelessSettingsControllerDelegate>)arg1 ;
-(id)init;
-(id<SFWirelessSettingsControllerDelegate>)delegate;
-(void)setWifiEnabled:(BOOL)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setBluetoothEnabled:(BOOL)arg1 ;
-(BOOL)isBluetoothEnabled;
-(void)repairAppleID;
-(BOOL)deviceSupportsWAPI;
-(BOOL)isWirelessAccessPointEnabled;
@end
