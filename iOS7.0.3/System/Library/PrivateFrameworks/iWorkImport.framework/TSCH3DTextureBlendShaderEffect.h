/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect
+(void)setBlendFactor:(float)arg1 unit:(int)arg2 effectsStates:(id)arg3 ;
+(id)variableBlendFactor;
+(id)variableBlendTexture;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
+(id)effect;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableBlendFactor;
-(id)variableBlendTexture;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

