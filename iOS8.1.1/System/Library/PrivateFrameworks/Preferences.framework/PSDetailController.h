/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic) PSEditingPane * pane; 
-(void)saveChanges;
-(void)dealloc;
-(id)title;
-(void)suspend;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setPane:(PSEditingPane *)arg1 ;
-(PSEditingPane *)pane;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(CGRect)paneFrame;
-(void)loadPane;
@end
