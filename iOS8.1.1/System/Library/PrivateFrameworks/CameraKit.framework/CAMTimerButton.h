/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMExpandableMenuButton.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView;

@interface CAMTimerButton : CAMExpandableMenuButton {

	BOOL _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(id<CAMTimerButtonDelegate>)delegate;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(id)headerView;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)_glyphView;
-(BOOL)hideOffWhenCollapsed;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(long long)numberOfMenuItems;
@end
