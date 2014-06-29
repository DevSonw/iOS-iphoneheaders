/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSCH3DChartShadowsBlurParameters : NSObject {

	float mQuality;
	long long mNumPasses;
	long long mShadowSize;
	float mKernelScale;

}

@property (assign,nonatomic) float quality; 
@property (assign,nonatomic) long long numPasses; 
@property (assign,nonatomic) long long shadowSize; 
@property (assign,nonatomic) float kernelScale; 
+(id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(long long)numPasses;
-(void)setNumPasses:(long long)arg1 ;
-(float)kernelScale;
-(void)setKernelScale:(float)arg1 ;
-(long long)shadowSize;
-(id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(void)setShadowSize:(long long)arg1 ;
-(float)quality;
-(void)setQuality:(float)arg1 ;
@end
