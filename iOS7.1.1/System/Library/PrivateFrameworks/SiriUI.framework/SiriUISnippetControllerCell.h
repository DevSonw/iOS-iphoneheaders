/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <SiriUI/SiriUIReusableView.h>

@protocol SiriUIReusableView;
@class SiriUIKeyline, SiriUIContentButton, UIView, UILabel, UICollectionReusableView, SiriUISnippetViewController;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {

	SiriUIKeyline* _bottomKeyline;
	SiriUIContentButton* _snippetPunchOutButton;
	UIView* _snippetBackgroundView;
	UILabel* _cancelledLabel;
	UICollectionReusableView<SiriUIReusableView>* _headerView;
	UICollectionReusableView<SiriUIReusableView>* _footerView;
	UICollectionReusableView<SiriUIReusableView>* _transparentHeaderView;
	UICollectionReusableView<SiriUIReusableView>* _transparentFooterView;
	SiriUISnippetViewController* _snippetViewController;
	UIEdgeInsets _snippetEdgeInsets;

}

@property (assign,setter=_setSnippetEdgeInsets:,getter=_snippetEdgeInsets,nonatomic) UIEdgeInsets snippetEdgeInsets;              //@synthesize snippetEdgeInsets=_snippetEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;                                          //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(id)reuseIdentifier;
+(double)defaultHeight;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void).cxx_destruct;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)_snippetPunchOutButtonTapped:(id)arg1 ;
-(void)_configureSubviewsForCurrentInset;
-(double)_heightForFooterView;
-(double)_heightForTransparentHeaderView;
-(double)_heightForTransparentFooterView;
-(double)_heightForHeaderView;
-(UIEdgeInsets)_snippetEdgeInsets;
-(void)_setFooterView:(id)arg1 ;
-(void)_setTransparentHeaderView:(id)arg1 ;
-(void)_setTransparentFooterView:(id)arg1 ;
-(void)_setSnippetEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)animateSnippetCancellationWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateSnippetConfirmationWithCompletion:(/*^block*/ id)arg1 ;
-(void)_setHeaderView:(id)arg1 ;
@end
