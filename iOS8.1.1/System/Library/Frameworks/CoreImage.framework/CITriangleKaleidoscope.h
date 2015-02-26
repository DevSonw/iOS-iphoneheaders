/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputSize;
	NSNumber* inputRotation;
	NSNumber* inputDecay;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputDecay; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputPoint;
-(void)setInputRotation:(NSNumber *)arg1 ;
-(void)setInputSize:(NSNumber *)arg1 ;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(NSNumber *)inputSize;
-(NSNumber *)inputRotation;
-(NSNumber *)inputDecay;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputPoint:(CIVector *)arg1 ;
-(id)outputImage;
@end
