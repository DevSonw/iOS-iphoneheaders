/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartGridValue.h>

@class NSString;

@interface TSCHChartGridDurationValue : NSObject <TSCHChartGridValue> {

	double mDuration;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int chartGridValueType; 
+(id)durationValueWithDouble:(double)arg1 ;
-(int)chartGridValueType;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDouble:(double)arg1 ;
@end
