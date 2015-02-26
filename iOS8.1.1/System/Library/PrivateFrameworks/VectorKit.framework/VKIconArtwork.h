/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKImage, NSMutableArray;

@interface VKIconArtwork : NSObject {

	BOOL _hasIcon;
	VKImage* _image;
	double _contentScale;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale;              //@synthesize contentScale=_contentScale - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(id)image;
-(double)contentScale;
-(id)_newImage;
-(void)_cleanUpAfterDrawing;
-(id)initWithImage:(CGImageRef)arg1 contentScale:(double)arg2 ;
-(void)getImage:(/*^block*/id)arg1 ;
@end
