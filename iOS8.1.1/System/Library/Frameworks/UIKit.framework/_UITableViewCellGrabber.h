/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell;

@interface _UITableViewCellGrabber : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;

}
+(id)grabberImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 tableViewCell:(id)arg2 ;
@end

