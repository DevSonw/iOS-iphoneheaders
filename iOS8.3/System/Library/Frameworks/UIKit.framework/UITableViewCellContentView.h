/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class CALayer;

@interface UITableViewCellContentView : UIView {

	CALayer* _mask;

}

@property (nonatomic,retain) CALayer * mask; 
+(id)classFallbacksForKeyedArchiver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(void)updateConstraintsIfNeeded;
-(id)_cell;
-(void)_tableViewCellContentViewCommonSetup;
@end
