/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreRCXPCServiceCECPrivate
@required
-(void)fakeBusCreateAsync:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)fakeSetBusLinkStateAsync:(id)arg1 newLinkState:(char)arg2 reply:(/*^block*/id)arg3;
-(void)fakeCreateRemoteInstanceAsync:(unsigned)arg1 bus:(id)arg2 withLogicalAddress:(unsigned char)arg3 withPhysicalAddress:(unsigned)arg4 reply:(/*^block*/id)arg5;
-(void)fakeAssignLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(/*^block*/id)arg3;
-(void)fakeDeviceRemoveAsync:(id)arg1 reply:(/*^block*/id)arg2;

@end
