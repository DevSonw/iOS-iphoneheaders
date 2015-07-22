/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFColorBoxes : NSObject {

	/*function pointer*/void** _colorBoxes;
	unsigned long long _rowCount;
	unsigned long long _columnCount;
	unsigned long long _size;
	double _contrast;

}

@property (nonatomic,readonly) /*function pointer*/void** colorBoxes;              //@synthesize colorBoxes=_colorBoxes - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount;                        //@synthesize rowCount=_rowCount - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount;                     //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double contrast;                                    //@synthesize contrast=_contrast - In the implementation block
-(void)dealloc;
-(unsigned long long)size;
-(id)description;
-(double)contrast;
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(void)_freeColorBoxes;
-(id)initWithColorBoxes:(/*function pointer*/void**)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 contrast:(double)arg5 ;
-(/*function pointer*/void**)colorBoxes;
@end
