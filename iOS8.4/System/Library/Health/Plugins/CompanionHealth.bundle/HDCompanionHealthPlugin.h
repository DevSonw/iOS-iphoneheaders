/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Health/Plugins/CompanionHealth.bundle/CompanionHealth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemonExtensions/HDHealthExtensionsPlugin.h>
#import <CompanionHealth/PSYSyncCoordinatorDelegate.h>
#import <CompanionHealth/HDHealthExtensionsServerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PSYSyncCoordinator, HDNanoSyncManager, NSString;

@interface HDCompanionHealthPlugin : HDHealthExtensionsPlugin <PSYSyncCoordinatorDelegate, HDHealthExtensionsServerDelegate> {

	BOOL _didPairedSyncStart;
	NSObject*<OS_dispatch_queue> _syncQueue;
	PSYSyncCoordinator* _pairedSyncCoordinator;
	HDNanoSyncManager* _nanoSyncManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                  //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (nonatomic,retain) HDNanoSyncManager * nanoSyncManager;                     //@synthesize nanoSyncManager=_nanoSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNanoSyncManager:(HDNanoSyncManager *)arg1 ;
-(void)_syncQueue_didPairWithError:(id)arg1 ;
-(void)_syncQueue_pairedSyncDidStart;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)_syncQueue_didSendActivationMessageWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)diagnosticDescription;
-(id)initWithHealthDaemon:(id)arg1 ;
-(HDNanoSyncManager *)nanoSyncManager;
-(id)serverWithClient:(id)arg1 error:(id*)arg2 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
@end
