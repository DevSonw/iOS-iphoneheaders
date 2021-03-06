/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout {

	UIColor* _evenColor;
	int _numberOfColumns;
	UIColor* _oddColor;
	float _rowHeight;

}

@property (nonatomic,copy) UIColor * evenRowBackgroundColor;              //@synthesize evenColor=_evenColor - In the implementation block
@property (nonatomic,copy) UIColor * oddRowBackgroundColor;               //@synthesize oddColor=_oddColor - In the implementation block
@property (assign,nonatomic) int numberOfColumns;                         //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) float rowHeight;                             //@synthesize rowHeight=_rowHeight - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(int)numberOfColumns;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setNumberOfColumns:(int)arg1 ;
-(id)evenRowBackgroundColor;
-(void)setEvenRowBackgroundColor:(id)arg1 ;
-(void)setOddRowBackgroundColor:(id)arg1 ;
-(id)oddRowBackgroundColor;
-(void).cxx_destruct;
@end

