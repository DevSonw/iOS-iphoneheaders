/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:36:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetPrivate;

@interface ALAsset : NSObject {

	id _internal;

}

@property (nonatomic,readonly) ALAsset * originalAsset; 
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (nonatomic,retain) ALAssetPrivate * internal;                      //@synthesize internal=_internal - In the implementation block
+(CGSize)largePreviewImageSizeForSize:(CGSize)arg1 ;
-(id)initWithManagedAsset:(id)arg1 library:(id)arg2 ;
-(id)_typeAsString;
-(id)_createContentEditingOutputWithType:(int)arg1 ;
-(id)representationForUTI:(id)arg1 ;
-(void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setVideoAtPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setLargePreviewImageWithImageData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)requestDefaultRepresentation;
-(ALAssetPrivate *)internal;
-(CGImageRef)aspectRatioThumbnail;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(char)isEditable;
-(id)_uuid;
-(CGImageRef)thumbnail;
-(id)valueForProperty:(id)arg1 ;
-(id)defaultRepresentation;
-(void)setInternal:(ALAssetPrivate *)arg1 ;
-(ALAsset *)originalAsset;
-(void)setExternalUsageIntent:(unsigned)arg1 ;
-(char)isDeletable;
@end

