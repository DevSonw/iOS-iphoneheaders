/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>

@class TKArtworkView, UILabel, TKButtonView, UIImageView, TKButtonComponent, TKArtworkComponent, TKProductLockupComponent;

@interface TKProductLockup : TKView {

	TKArtworkView* _artwork;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _genreLabel;
	UILabel* _languageLabel;
	TKButtonView* _buttonView;
	UIImageView* _explicitView;
	char _inPopup;
	TKButtonComponent* _buttonComponent;
	TKArtworkComponent* _artworkComponent;

}

@property (retain) TKButtonComponent * buttonComponent;                //@synthesize buttonComponent=_buttonComponent - In the implementation block
@property (assign) char inPopup;                                       //@synthesize inPopup=_inPopup - In the implementation block
@property (retain) TKProductLockupComponent * component; 
@property (retain) TKArtworkComponent * artworkComponent;              //@synthesize artworkComponent=_artworkComponent - In the implementation block
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
+(CGRect)rectForArtwork:(id)arg1 ;
+(CGRect)buttonViewRectForText:(id)arg1 withTheme:(id)arg2 withComponent:(id)arg3 withBounds:(CGRect)arg4 ;
+(CGSize)titleSizeForLabel:(id)arg1 withIntialBounds:(CGSize)arg2 withTheme:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(char)inPopup;
-(void)setArtworkComponent:(TKArtworkComponent *)arg1 ;
-(id)productTitle;
-(id)productSubtitle;
-(void)updateFrameSizes;
-(void)setButtonComponent:(TKButtonComponent *)arg1 ;
-(TKArtworkComponent *)artworkComponent;
-(void)removeActionButton;
-(TKButtonComponent *)buttonComponent;
-(void)setInPopup:(char)arg1 ;
-(void)setActionButtonTitle:(id)arg1 ;
-(void)setLanguage:(id)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)renderView;
@end
