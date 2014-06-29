/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/SBDeviceLockKeypad.h>

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {

	UIButton* _emergencyCallButton;
	UIButton* _poundButton;
	UIImage* _deleteIcon;

}
+(id)keypadImage;
+(id)pressedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setShowsEmergencyCallButton:(bool)arg1 ;
-(bool)showsEmergencyCallButton;
-(BOOL)deleteKeyChar;
-(BOOL)cancelKeyChar;
-(BOOL)emergencyKeyChar;
-(void)setDeleteEnabled:(bool)arg1 ;
-(void)_updateCancelAndDeleteButtons;
-(float)_yFudge;
@end
