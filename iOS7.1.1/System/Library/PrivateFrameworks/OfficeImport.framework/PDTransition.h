/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions;

@interface PDTransition : OADProperties {

	bool mHasType;
	int mType;
	bool mHasSpeed;
	int mSpeed;
	bool mHasAdvanceOnClick;
	bool mIsAdvanceOnClick;
	bool mHasAdvanceAfterTime;
	int mAdvanceAfterTime;
	PDTransitionOptions* mOptions;

}
-(void)dealloc;
-(id)init;
-(void)setSpeed:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)speed;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(bool)hasType;
-(bool)hasSpeed;
-(bool)hasIsAdvanceOnClick;
-(bool)isAdvanceOnClick;
-(bool)hasAdvanceAfterTime;
-(int)advanceAfterTime;
-(void)setIsAdvanceOnClick:(bool)arg1 ;
-(void)setAdvanceAfterTime:(int)arg1 ;
-(bool)hasTransitionOptions;
@end
