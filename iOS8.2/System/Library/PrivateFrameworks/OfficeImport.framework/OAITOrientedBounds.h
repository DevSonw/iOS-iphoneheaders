/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAITOrientedBounds : NSObject
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(CGRect)arg3 ;
+(float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2 ;
+(CGAffineTransform)transformFromBounds:(CGRect)arg1 toOrientedBounds:(id)arg2 ;
+(id)relativeOrientedBoundsOfDrawable:(id)arg1 ;
+(id)absoluteOrientedBoundsOfDrawable:(id)arg1 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 logicalBounds:(CGRect)arg2 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg1 ;
+(CGRect)axisParallelBoundsOfOrientedBounds:(id)arg1 ;
@end
