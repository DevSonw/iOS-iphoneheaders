/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSDMixing.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSMutableArray, NSArray, TSUColor, NSString;

@interface TSDGradient : TSDFill <TSSPreset, TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying> {

	NSMutableArray* mStops;
	unsigned long long mType;
	double mOpacity;
	CGShadingRef mShadingRef;
	bool mIsAdvancedGradient;

}

@property (nonatomic,readonly) NSArray * gradientStops; 
@property (nonatomic,readonly) TSUColor * firstColor; 
@property (nonatomic,readonly) TSUColor * lastColor; 
@property (nonatomic,readonly) unsigned long long gradientType; 
@property (assign,nonatomic) double opacity; 
@property (nonatomic,readonly) bool isOpaque; 
@property (nonatomic,readonly) CGShadingRef shadingRef; 
@property (assign,nonatomic) bool isAdvancedGradient; 
@property (nonatomic,readonly) bool hasAlpha; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(bool)useInflections;
+(void)enableInflections;
+(void)disableInflections;
+(bool)useQuartzShadings;
+(void)sortStopsArray:(id)arg1 ;
+(id)linearGradientWithGradientStops:(id)arg1 ;
+(id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)radialGradientWithGradientStops:(id)arg1 ;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)presetKind;
-(SEL)mapThemeAssetSelector;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)firstColor;
-(id)newColorAtFraction:(double)arg1 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 ;
-(void)releaseShadingRef;
-(id)gradientStops;
-(bool)isAdvancedGradient;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 ;
-(bool)isAdvancedGradientIgnoringFlag;
-(id)lastColor;
-(id)stopBeforeFraction:(double)arg1 ;
-(id)stopAfterFraction:(double)arg1 ;
-(void)setIsAdvancedGradient:(bool)arg1 ;
-(void)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2 ;
-(void)p_insertGradientStop:(id)arg1 ;
-(bool)isEqualIgnoringTransform:(id)arg1 ;
-(CGShadingRef)shadingRef;
-(id)stopAtIndex:(unsigned long long)arg1 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 atAngle:(double)arg3 ;
-(CGAffineTransform)centeredRadialTransformInRect:(CGRect)arg1 ;
-(CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(void)p_setAlpha:(CGContextRef)arg1 ;
-(CGContextRef)p_beginBitmapWrapperContextInContext:(CGContextRef)arg1 returningIntegralBounds:(CGRect*)arg2 ;
-(void)p_endBitmapWrapperContext:(CGContextRef)arg1 inContext:(CGContextRef)arg2 withIntegralBounds:(CGRect)arg3 ;
-(void)p_setGradientStops:(id)arg1 ;
-(void)p_removeStop:(id)arg1 ;
-(id)p_removeStopAtIndex:(unsigned long long)arg1 ;
-(void)p_insertStopAtFraction:(double)arg1 ;
-(void)p_reverseStopOrder;
-(void)p_evenlyDistributeStops;
-(void)p_setGradientType:(unsigned long long)arg1 ;
-(void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2 ;
-(void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2 ;
-(void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ;
-(void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2 ;
-(bool)hasAlpha;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isOpaque;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)referenceColor;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(int)fillType;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(unsigned long long)gradientType;
@end
