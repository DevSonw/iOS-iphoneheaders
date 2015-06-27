/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet {

	PKImage* _faceImage;
	CGRect _logoRect;
	CGRect _thumbnailRect;
	CGRect _stripRect;

}

@property (nonatomic,retain) PKImage * faceImage;               //@synthesize faceImage=_faceImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                   //@synthesize logoRect=_logoRect - In the implementation block
@property (assign,nonatomic) CGRect thumbnailRect;              //@synthesize thumbnailRect=_thumbnailRect - In the implementation block
@property (assign,nonatomic) CGRect stripRect;                  //@synthesize stripRect=_stripRect - In the implementation block
+(char)supportsSecureCoding;
+(int)currentVersion;
+(int)imageSetType;
+(id)archiveName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)preheatImages;
-(PKImage *)faceImage;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
-(CGRect)logoRect;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4 ;
-(void)setFaceImage:(PKImage *)arg1 ;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setThumbnailRect:(CGRect)arg1 ;
-(void)setStripRect:(CGRect)arg1 ;
@end
