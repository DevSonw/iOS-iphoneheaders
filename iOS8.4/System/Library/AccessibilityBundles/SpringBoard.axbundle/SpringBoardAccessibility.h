/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/__SpringBoardAccessibility_super.h>

@interface SpringBoardAccessibility : __SpringBoardAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(BOOL)_accessibilityIsSystemLocked;
-(BOOL)_accessibilityIsBuddyRunning;
-(BOOL)_isDim;
-(BOOL)_accessibilityIsBatteryLow;
-(void)powerDown;
-(BOOL)_accessibilityIsSystemSleeping;
-(int)_accessibilityCurrentCallState;
-(void)_proximityChanged:(id)arg1 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 ;
-(void)_accessibilityHandleOrientationChange;
-(int)_accessibilityApplicationOrientation;
-(BOOL)_accessibilityIsVoiceControlRunning;
-(BOOL)_accessibilityAssistantIsListening;
-(BOOL)_accessibilitySystemWideGestureInProgress;
-(BOOL)_accessibilityIsAppSwitcherVisible;
-(BOOL)_accessibilityIsQuietModeEnabled;
-(void*)_accessibilityCenterPointOfScreen;
-(void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3 ;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1 ;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)accessibilityInitialize;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(BOOL)accessibilityStartStopToggle;
-(void)accessibilityDisable;
-(BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)_accessibilityIsSystemAppServer;
-(BOOL)handleDoubleHeightStatusBarTap:(long long)arg1 ;
-(void)_accessibilityStatusChanged:(id)arg1 ;
-(BOOL)_accessibilityIsInspectorMinimized;
-(BOOL)_accessibilityIsPointInAXInspector:(id)arg1 ;
-(void)reboot;
-(BOOL)_accessibilityHitTestsStatusBar;
-(BOOL)_accessibilitySystemAppServerIsReady;
-(id)_accessibilityStatusBar;
-(id)_accessibilityLaunchableApps;
-(id)_accessibilityAppSwitcherApps;
@end

