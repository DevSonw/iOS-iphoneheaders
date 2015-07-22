/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, TUCallCenter, NSArray, NSMutableDictionary, NSTimer, NSString;

@interface MRDRemoteControlServer : NSObject <MRDXPCMessageHandling> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	TUCallCenter* _callCenter;
	NSArray* _remoteControlBlacklist;
	NSMutableDictionary* _commandQueuesForDisplayIDs;
	NSMutableDictionary* _remoteControlContexts;
	NSTimer* _queuedCommandsTimeoutTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loadRemoteControlBlacklist;
-(void)_clientCanBeNowPlayingAppNotification:(id)arg1 ;
-(void)_sendLocalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_sendExternalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2 ;
-(BOOL)_client:(id)arg1 isBlacklistedForRemoteControlInteractionOfType:(long long)arg2 ;
-(void)_sendQueuedCommandsForDestinationClient:(id)arg1 ;
-(BOOL)_shouldIgnoreCommandType:(unsigned)arg1 ;
-(id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1 ;
-(id)_destinationClientForRemoteControlCommand:(id)arg1 ;
-(void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2 ;
-(void)_clearQueuedCommandsForApplicationWithDisplayID:(id)arg1 ;
-(id)_remoteControlContextForCommand:(id)arg1 ;
-(id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)sendRemoteControlCommand:(id)arg1 ;
-(void)clearContextsForClient:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
