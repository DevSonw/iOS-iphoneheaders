/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface LabelSequenceView : UIView {

	NSArray* _stringDrawingInfoValues;

}

@property (nonatomic,retain) NSArray * stringDrawingInfoValues;              //@synthesize stringDrawingInfoValues=_stringDrawingInfoValues - In the implementation block
-(CGSize)requiredSize;
-(NSArray *)stringDrawingInfoValues;
-(void)setStringDrawingInfoValues:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)init;
@end
