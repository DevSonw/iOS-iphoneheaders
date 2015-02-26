/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned long long)arg2 coalesceMask:(unsigned long long)arg3 forModes:(id)arg4 ;
@end
