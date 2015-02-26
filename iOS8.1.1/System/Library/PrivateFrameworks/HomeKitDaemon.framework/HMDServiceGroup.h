/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMMessageReceiver.h>
#import <HomeKitDaemon/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSUUID, NSObject, NSMutableArray, HMDHome, HMMessageDispatcher;

@interface HMDServiceGroup : NSObject <HMMessageReceiver, NSSecureCoding> {

	NSString* _name;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _services;
	HMDHome* _home;
	HMMessageDispatcher* _msgDispatcher;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;                                       //@synthesize services=_services - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSUUID *)uuid;
-(void)setServices:(NSMutableArray *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)_registerForMessages;
-(void)_handleRenameRequest:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)fixupServicesForReplacementAccessory:(id)arg1 ;
-(void)configure:(id)arg1 queue:(id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4 ;
-(void)removeService:(id)arg1 ;
-(void)removeServicesForAccessory:(id)arg1 ;
-(void)_handleAddServiceRequest:(id)arg1 ;
-(void)_handleRemoveServiceRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableArray *)services;
@end
