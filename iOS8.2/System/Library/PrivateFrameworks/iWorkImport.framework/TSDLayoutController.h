/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDCanvas, TSDRootLayout, NSMutableSet, TSDLayout;

@interface TSDLayoutController : NSObject {

	TSDCanvas* mCanvas;
	TSDRootLayout* mRootLayout;
	CFDictionaryRef mLayoutsByInfo;
	NSMutableSet* mInvalidLayouts;
	NSMutableSet* mLayoutsNeedingRecreating;
	NSMutableSet* mInvalidChildrenLayouts;
	TSDLayout* mValidatingLayout;

}
+(void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(/*^block*/id)arg2 ;
+(id)allInteractiveLayoutControllers;
-(void)setInfos:(id)arg1 ;
-(void)validateLayoutWithDependencies:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(id)layoutsForInfo:(id)arg1 ;
-(id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)invalidateLayout:(id)arg1 ;
-(void)invalidateChildrenOfLayout:(id)arg1 ;
-(id)rootLayout;
-(void)i_registerLayout:(id)arg1 ;
-(void)i_unregisterLayout:(id)arg1 ;
-(void)validateLayouts;
-(void)notifyThatLayoutsChangedOutsideOfLayout;
-(void)validateLayouts:(id)arg1 ;
-(id)sortLayoutsForDependencies:(id)arg1 ;
-(void)validateLayoutsWithDependencies:(id)arg1 ;
-(id)validatedLayoutsForInfo:(id)arg1 ;
-(void)invalidateLayoutForRecreation:(id)arg1 ;
-(id)layoutsForInfos:(id)arg1 ;
-(id)layoutsInRect:(CGRect)arg1 ;
-(CGRect)rectOfTopLevelLayouts;
-(id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2 ;
-(void)i_removeAllLayouts;
-(char)isLayoutOffscreen;
-(void)dealloc;
-(id)initWithCanvas:(id)arg1 ;
-(id)canvas;
@end

