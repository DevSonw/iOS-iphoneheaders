/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <imagent/ParentalControlsProtocol.h>

@class NSMutableDictionary;

@interface ParentalControls : NSObject <ParentalControlsProtocol> {

	NSMutableDictionary* _parentalControls;
	BOOL _active;
	BOOL _disableAV;
	BOOL _forceChatLogging;
	BOOL _shouldPostNotifications;

}

@property (nonatomic,readonly) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL disableAV; 
@property (nonatomic,readonly) BOOL forceChatLogging; 
@property (assign,nonatomic) BOOL shouldPostNotifications;              //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)standardControls;
+(id)objectForKey:(id)arg1 ;
-(id)whitelistForServiceSession:(id)arg1 ;
-(BOOL)forceWhitelistForServiceSession:(id)arg1 ;
-(id)init;
-(BOOL)active;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableAV;
-(BOOL)forceChatLogging;
-(BOOL)disableService:(id)arg1 ;
-(BOOL)disableAccount:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(BOOL)disableServiceSession:(id)arg1 ;
-(void)updateAccountActivation;
@end
