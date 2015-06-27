/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject {

	SCRCArgumentHolderPrivate* _private;

}
-(id)option;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(int)compare:(id)arg1 ;
-(char)process;
-(id)argument;
-(id)argumentDescription;
-(void)setArgument:(id)arg1 ;
-(void)setArgumentDescription:(id)arg1 ;
-(void)setIsRequired:(char)arg1 ;
-(char)isRequired;
-(void)setOption:(id)arg1 ;
@end
