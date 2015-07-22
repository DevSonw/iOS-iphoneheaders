/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent {

	PLCFNotificationOperatorComposition* _notificationReduceMotionChanged;
	PLCFNotificationOperatorComposition* _notificationBackgroundContrastChanged;

}

@property (readonly) PLCFNotificationOperatorComposition * notificationReduceMotionChanged;                    //@synthesize notificationReduceMotionChanged=_notificationReduceMotionChanged - In the implementation block
@property (readonly) PLCFNotificationOperatorComposition * notificationBackgroundContrastChanged;              //@synthesize notificationBackgroundContrastChanged=_notificationBackgroundContrastChanged - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventNoneDefinitions;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)logEventForwardReduceMotion;
-(void)logEventForwardBackgroundContrast;
-(PLCFNotificationOperatorComposition *)notificationReduceMotionChanged;
-(PLCFNotificationOperatorComposition *)notificationBackgroundContrastChanged;
@end
