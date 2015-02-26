/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol PLQLAccountingGroupProtocol <NSObject>
@property (readonly) short accountingGroupType; 
@property (retain,readonly) NSString * accountingGroupName; 
@required
-(NSString *)accountingGroupName;
-(short)accountingGroupType;
-(id)getLastSnapshot;
-(double)timeOfLastSnapshot;
-(double)safeTimeForAccounting;
-(id)getLastOpenSnapshot;
-(id)getEventsInRange:(PLTimeIntervalRange)arg1;

@end
