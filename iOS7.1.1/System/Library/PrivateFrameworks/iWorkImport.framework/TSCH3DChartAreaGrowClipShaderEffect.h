/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

@interface TSCH3DChartAreaGrowClipShaderEffect : TSCH3DChartClippingShaderEffect {

	bool mIsOneSidedClipping;
	bool mUseDiscard;
	float mCapFudge;
	float mClipFudge;

}

@property (assign,nonatomic) bool isOneSidedClipping; 
@property (assign,nonatomic) bool useDiscard; 
@property (assign,nonatomic) float capFudge; 
@property (assign,nonatomic) float clipFudge; 
+(id)variableClipVertex;
+(id)variableIsCap;
+(id)variableClipValues;
+(id)variableZClipValues;
+(id)variableAbsIsCap;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(unsigned long long)numberOfClippingValues;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableClipVertex;
-(id)variableIsCap;
-(bool)useDiscard;
-(void)setUseDiscard:(bool)arg1 ;
-(float)capFudge;
-(void)setCapFudge:(float)arg1 ;
-(float)clipFudge;
-(void)setClipFudge:(float)arg1 ;
-(id)variableClipValues;
-(id)variableZClipValues;
-(id)variableAbsIsCap;
-(bool)isOneSidedClipping;
-(void)setIsOneSidedClipping:(bool)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
@end
