/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionServer.h>

@class NSXPCListener, NSMutableDictionary, NSString;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {

	NSXPCListener* _listener;
	NSMutableDictionary* _sessionProxiesBySessionID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSessionServer;
-(id)init;
-(void)start;
-(void)stop;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_dumpDebugInformation;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
@end
