/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CTCellularPlanValidating.h>

@class NSString;

@interface CTCellularPlanResponseCodeParser : NSObject <CTCellularPlanValidating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)validate:(id)arg1 parseTo:(int*)arg2 responseText:(id*)arg3 error:(id*)arg4 ;
+(BOOL)validate:(id)arg1 ;
@end
