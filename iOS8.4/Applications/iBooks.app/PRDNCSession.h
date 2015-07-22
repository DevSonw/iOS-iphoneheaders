/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface PRDNCSession : NSObject {

	NSMutableDictionary* _fullNotName2MessageHandler;
	NSMutableDictionary* _baseMessageName2fullNotNames;
	NSMutableSet* _baseMessageNamesWaitingForReply;

}

@property (nonatomic,readonly) CFNotificationCenterRef cfNC; 
@property (nonatomic,readonly) NSMutableDictionary * fullNotName2MessageHandler;                //@synthesize fullNotName2MessageHandler=_fullNotName2MessageHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * baseMessageName2fullNotNames;              //@synthesize baseMessageName2fullNotNames=_baseMessageName2fullNotNames - In the implementation block
@property (nonatomic,readonly) NSMutableSet * baseMessageNamesWaitingForReply;                  //@synthesize baseMessageNamesWaitingForReply=_baseMessageNamesWaitingForReply - In the implementation block
+(void)enableHackForUnitTests;
+(void)setReplyTimeout:(double)arg1 ;
+(void)setLoggingEnabled:(char)arg1 ;
-(void)setHandlerForMessageName:(id)arg1 acceptedParams:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearAllHandlers;
-(CFNotificationCenterRef)cfNC;
-(NSMutableSet *)baseMessageNamesWaitingForReply;
-(void)_setHandlerForFullNotificationName:(id)arg1 baseMessageName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_restartTimeoutHandlerForMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 acceptedReplies:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)fullNotName2MessageHandler;
-(NSMutableDictionary *)baseMessageName2fullNotNames;
-(void)_handleReplyTimeout:(id)arg1 ;
-(void)_cleanupReplyHandlersForBaseName:(id)arg1 ;
-(void)sendMessage:(id)arg1 param:(id)arg2 ;
-(void)sendMessage:(id)arg1 withBoolReply:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 withAckReply:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setHandlerForMessageName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)sendMessage:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
@end
