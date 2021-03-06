/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <SymptomAnalytics/ServiceInterface.h>

@protocol OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableDictionary, AnalyticsEngine, NSObject;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, ServiceInterface> {

	AnalyticsWorkspace* wspace;
	NSMutableDictionary* spaces;
	AnalyticsEngine* engine;
	NSObject<OS_dispatch_queue>* queue;
	NSMutableDictionary* lastAllowedRequests;

}
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(bool)_assertEntitlement:(id)arg1 entitlement:(id)arg2 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/ id)arg5 ;
-(void)setUsageOption:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(id)_extractQueryStringFrom:(id)arg1 ;
-(id)_performQueryOnEntityCoreFromCache:(id)arg1 pred:(id)arg2 ;
-(bool)_checkRateLimitForConnection:(id)arg1 ;
-(void)_performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/ id)arg5 ;
-(id)initWithWorkspace:(id)arg1 engine:(id)arg2 queue:(id)arg3 ;
-(void).cxx_destruct;
@end

