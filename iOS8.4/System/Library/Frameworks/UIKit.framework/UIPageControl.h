/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, UIImage, UIColor, _UILegibilitySettings;

@interface UIPageControl : UIControl {

	NSMutableArray* _indicators;
	long long _currentPage;
	long long _displayedPage;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	}  _pageControlFlags;
	UIImage* _currentPageImage;
	UIImage* _pageImage;
	long long _lastUserInterfaceIdiom;
	UIColor* _currentPageIndicatorTintColor;
	UIColor* _pageIndicatorTintColor;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) long long numberOfPages; 
@property (assign,nonatomic) long long currentPage; 
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (assign,setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonPageControlInit;
-(void)setNumberOfPages:(long long)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(long long)numberOfPages;
-(void)_invalidateIndicators;
-(id)_activePageIndicatorImage;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_customPageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_customPageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorImage;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_setCurrentPage:(long long)arg1 ;
-(void)_setDisplayedPage:(long long)arg1 ;
-(void)_updateCurrentPageDisplay;
-(double)_indicatorSpacing;
-(CGRect)_indicatorFrameAtIndex:(long long)arg1 ;
-(CGRect)_modernBounds;
-(BOOL)_hasCustomImageForPage:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(id)_correctIdiomaticNameForImageNamed:(id)arg1 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(BOOL)_shouldDrawLegibly;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 legible:(BOOL)arg3 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(double)_modernCornerRadius;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(long long)currentPage;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(BOOL)hidesForSinglePage;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(BOOL)defersCurrentPageDisplay;
-(void)updateCurrentPageDisplay;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(long long)_displayedPage;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(long long)_legibilityStyle;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
-(id)_legibilitySettings;
@end
