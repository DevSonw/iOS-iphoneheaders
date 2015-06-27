/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUILayoutCacheDelegate.h>

@class SKUINavigationBarButtonsController, SKUIClientContext, SKUINavigationBarContext, SKUINavigationPaletteController, UIViewController, NSMutableArray, NSMapTable, SKUINavigationBarViewElement, UIView, NSArray, NSString;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate> {

	SKUINavigationBarButtonsController* _buttonsController;
	SKUIClientContext* _clientContext;
	SKUINavigationBarContext* _navigationBarContext;
	SKUINavigationPaletteController* _paletteController;
	UIViewController* _parentViewController;
	NSMutableArray* _reusableSearchBarControllers;
	NSMapTable* _searchBarControllers;
	NSMutableArray* _sections;
	SKUINavigationBarViewElement* _viewElement;

}

@property (nonatomic,retain) SKUINavigationBarViewElement * navigationBarViewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                    //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;                       //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) UIView * navigationPaletteView; 
@property (nonatomic,readonly) NSArray * existingSearchBarControllers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)layoutCacheDidFinishBatch:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_viewElementEventNotification:(id)arg1 ;
-(id)_barButtonItemWithViewElement:(id)arg1 ;
-(id)_titleViewWithViewElement:(id)arg1 ;
-(id)_navigationBarContext;
-(id)barButtonItemForElementIdentifier:(id)arg1 ;
-(void)detachFromNavigationItem:(id)arg1 ;
-(void)attachToNavigationItem:(id)arg1 ;
-(void)_fullyReloadSections:(id)arg1 withNavigationItem:(id)arg2 ;
-(UIView *)navigationPaletteView;
-(id)initWithNavigationBarViewElement:(id)arg1 ;
-(id)_addSearchBarControllerWithViewElement:(id)arg1 ;
-(float)_availableWidth;
-(id)_barButtonItemWithButtonViewElement:(id)arg1 ;
-(id)_barButtonItemWithSearchBarViewElement:(id)arg1 ;
-(NSArray *)existingSearchBarControllers;
-(void)setReusableSearchBarControllers:(id)arg1 ;
-(void)updateNavigationItem:(id)arg1 ;
-(SKUINavigationBarViewElement *)navigationBarViewElement;
-(void)setNavigationBarViewElement:(SKUINavigationBarViewElement *)arg1 ;
@end
