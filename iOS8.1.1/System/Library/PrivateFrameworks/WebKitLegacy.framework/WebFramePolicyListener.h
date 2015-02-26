/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebPolicyDecisionListener.h>
#import <WebKitLegacy/WebFormSubmissionListener.h>

@class NSString;

@interface WebFramePolicyListener : NSObject <WebPolicyDecisionListener, WebFormSubmissionListener> {

	RefPtr<WebCore::Frame>* _frame;
	function<void (WebCore::PolicyAction)>* _policyFunction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)download;
-(void)dealloc;
-(void)invalidate;
-(void)ignore;
-(void)use;
-(void)continue;
-(id)initWithFrame:(Frame*)arg1 policyFunction:(function<void (WebCore::PolicyAction)>*)arg2 ;
-(void)receivedPolicyDecision:(int)arg1 ;
@end
