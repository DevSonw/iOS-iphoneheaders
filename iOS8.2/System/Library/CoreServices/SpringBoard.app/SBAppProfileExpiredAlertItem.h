/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SBApplicationIcon, NSString;

@interface SBAppProfileExpiredAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBApplicationIcon* _icon;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIcon:(id)arg1 ;
-(void)dealloc;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
@end
