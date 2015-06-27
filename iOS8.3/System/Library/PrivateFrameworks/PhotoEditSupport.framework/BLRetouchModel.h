/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:59:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSDictionary, BLRetouchLayerStack, NSLock;

@interface BLRetouchModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRetouchLayerStack* _layerStack;
	NSLock* _lock;

}
-(void)dealloc;
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(void)setLayerStack:(id)arg1 ;
-(char)hasRetouch;
-(char)hasLayerStack;
-(id)layerStack;
-(char)needsPadding;
-(float)paddingForSize:(CGSize)arg1 ;
-(void)buildLayerStackWithMaskSourceImage:(id)arg1 ;
-(id)imageForWorkingImageBuffer:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(float)arg4 ;
-(id)imageForWorkingImage:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(float)arg4 ;
@end
