/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class iAP2Connection;

@interface iAP2AppLaunchController : NSObject {

	iAP2Connection* _connection;

}
-(void)launchApplicationBundleID:(id)arg1 withLaunchMethod:(int)arg2 ;
-(BOOL)__postApplicationLaunchNotificationForAppName:(id)arg1 ;
-(BOOL)__launchApplicationNoAlert:(id)arg1 ;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 ;
@end
