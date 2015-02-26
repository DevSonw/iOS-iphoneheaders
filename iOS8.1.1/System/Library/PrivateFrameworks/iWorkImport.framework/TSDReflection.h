/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	double mOpacity;
	double mFadeAcceleration;

}

@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) double fadeAcceleration; 
+(id)instanceWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
+(BOOL)canMixWithNilObjects;
+(id)reflection;
-(void)saveToArchive:(ReflectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ReflectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)initWithOpacity:(double)arg1 ;
-(id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2 ;
-(double)fadeAcceleration;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
