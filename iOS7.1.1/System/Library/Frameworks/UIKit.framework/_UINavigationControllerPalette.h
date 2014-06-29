/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UINavigationController, UIViewController, NSArray;

@interface _UINavigationControllerPalette : UIView {

	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
	}  _paletteFlags;
	bool __paletteOverridesPinningBar;
	bool _paletteIsAboveBar;
	bool _visibleWhenPinningBarIsHidden;
	bool __palettePinningBarHidden;
	UIView* __backgroundView;
	UINavigationController* _navController;
	unsigned long long _boundaryEdge;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView;                                                              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) bool _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned long long boundaryEdge;                                                                                //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) bool pinned; 
@property (assign,nonatomic) bool pinningBarShadowIsHidden; 
@property (assign,nonatomic) bool paletteShadowIsHidden; 
@property (assign,nonatomic) bool paletteIsAboveBar;                                                                                           //@synthesize paletteIsAboveBar=_paletteIsAboveBar - In the implementation block
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) bool visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) bool _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) bool _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) bool _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
-(void)__ck_setPaletteFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)_backgroundView;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(void)_setBackgroundView:(id)arg1 ;
-(CGSize)_size;
-(bool)_paletteOverridesPinningBar;
-(bool)paletteShadowIsHidden;
-(void)_updateBackgroundView;
-(bool)isAttached;
-(bool)isVisibleWhenPinningBarIsHidden;
-(bool)_isPalettePinningBarHidden;
-(unsigned long long)boundaryEdge;
-(bool)paletteIsHidden;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(bool)arg2 ;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(void)_setPalettePinningBarHidden:(bool)arg1 ;
-(bool)isPinned;
-(void)_resetConstraintConstants:(double)arg1 ;
-(bool)_restartPaletteTransitionIfNecessary;
-(UIEdgeInsets)preferredContentInsets;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setPinningBar:(id)arg1 ;
-(void)_setAttached:(bool)arg1 didComplete:(bool)arg2 ;
-(void)setPinned:(bool)arg1 ;
-(bool)pinningBarShadowIsHidden;
-(id)_pinningBar;
-(void)_setRestartPaletteTransitionIfNecessary:(bool)arg1 ;
-(bool)_attachmentIsChanging;
-(void)setVisibleWhenPinningBarIsHidden:(bool)arg1 ;
-(void)setPinningBarShadowIsHidden:(bool)arg1 ;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetHeightConstraintConstant;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_configurePaletteConstraintsForBoundary;
-(void)_setAttachmentIsChanging:(bool)arg1 ;
-(void)setPaletteShadowIsHidden:(bool)arg1 ;
-(void)_setPaletteOverridesPinningBar:(bool)arg1 ;
-(id)navController;
-(bool)paletteIsAboveBar;
-(void)setPaletteIsAboveBar:(bool)arg1 ;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(id)_unpinnedController;
-(void)set_unpinnedController:(id)arg1 ;
-(id)_constraints;
-(id)_backgroundConstraints;
@end
