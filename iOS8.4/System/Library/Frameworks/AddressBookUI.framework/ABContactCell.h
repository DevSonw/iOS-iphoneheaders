/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSArray, ABCardGroupItem, CNContactStyle;

@interface ABContactCell : UITableViewCell {

	BOOL _addedConstantsConstraints;
	NSArray* _variableConstraints;
	BOOL _hasBeenDisplayed;
	ABCardGroupItem* _cardGroupItem;
	double _leftContentMargin;
	double _rightContentMargin;
	CNContactStyle* _contactStyle;

}

@property (assign,nonatomic) BOOL showSeparator; 
@property (nonatomic,retain) ABCardGroupItem * cardGroupItem;              //@synthesize cardGroupItem=_cardGroupItem - In the implementation block
@property (assign,nonatomic) double leftContentMargin;                     //@synthesize leftContentMargin=_leftContentMargin - In the implementation block
@property (assign,nonatomic) double rightContentMargin;                    //@synthesize rightContentMargin=_rightContentMargin - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDisplayed;                        //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                //@synthesize contactStyle=_contactStyle - In the implementation block
-(void)performDefaultAction;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(CNContactStyle *)contactStyle;
-(ABCardGroupItem *)cardGroupItem;
-(void)setCardGroupItem:(ABCardGroupItem *)arg1 ;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(BOOL)shouldPerformAccessoryAction;
-(void)performAccessoryAction;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(double)leftContentMargin;
-(void)setLeftContentMargin:(double)arg1 ;
-(double)rightContentMargin;
-(void)setRightContentMargin:(double)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(BOOL)shouldPerformDefaultAction;
@end

