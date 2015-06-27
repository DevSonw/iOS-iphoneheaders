/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBCarDisplaySettings : _UISettings {

	char _animateLockOutModeChanges;
	int _lockOutMode;

}

@property (assign) char animateLockOutModeChanges;              //@synthesize animateLockOutModeChanges=_animateLockOutModeChanges - In the implementation block
@property (assign) int lockOutMode;                             //@synthesize lockOutMode=_lockOutMode - In the implementation block
+(id)settingsControllerModule;
-(char)animateLockOutModeChanges;
-(int)lockOutMode;
-(void)setLockOutMode:(int)arg1 ;
-(void)setAnimateLockOutModeChanges:(char)arg1 ;
-(void)setDefaultValues;
@end
