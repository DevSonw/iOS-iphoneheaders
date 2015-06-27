/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class SAAlarmObject, NSString;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic,retain) SAAlarmObject * alarmToCreate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_ad_alarmResponseForResponse:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAAlarmObject *)alarmToCreate;
-(void)setAlarmToCreate:(SAAlarmObject *)arg1 ;
@end
