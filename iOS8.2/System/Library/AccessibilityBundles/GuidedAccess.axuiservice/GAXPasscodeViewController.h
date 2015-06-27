/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <Preferences/DevicePINController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXPasscodeViewControllerDelegate;
@class NSString, UIViewController, UIPopoverController, UINavigationController, UIStatusBar, UIView;

@interface GAXPasscodeViewController : DevicePINController <UINavigationControllerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	char _passcodeViewVisible;
	char _pincodeDismissalAllowed;
	id<GAXPasscodeViewControllerDelegate> _delegate;
	NSString* _passcode;
	int _presentationStyle;
	UIViewController* _presentorViewController;
	UIPopoverController* _hostingPopoverController;
	UINavigationController* _hostingNavigationController;
	UIStatusBar* _statusBar;
	UIView* _statusBarContainerView;

}

@property (assign,nonatomic) id<GAXPasscodeViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) char passcodeViewVisible;              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (nonatomic,retain) UIPopoverController * hostingPopoverController;                     //@synthesize hostingPopoverController=_hostingPopoverController - In the implementation block
@property (nonatomic,copy) NSString * passcode;                                                  //@synthesize passcode=_passcode - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIViewController * presentorViewController;                         //@synthesize presentorViewController=_presentorViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;               //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIView * statusBarContainerView;                                    //@synthesize statusBarContainerView=_statusBarContainerView - In the implementation block
@property (assign,nonatomic) char pincodeDismissalAllowed;                                       //@synthesize pincodeDismissalAllowed=_pincodeDismissalAllowed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresentationStyle:(int)arg1 forSetup:(char)arg2 ;
-(UIPopoverController *)hostingPopoverController;
-(void)presentPasscodeViewWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)dismissPasscodeViewAnimated:(char)arg1 reason:(int)arg2 ;
-(char)isPasscodeViewVisible;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setHostingNavigationController:(UINavigationController *)arg1 ;
-(void)setHostingPopoverController:(UIPopoverController *)arg1 ;
-(void)setPresentorViewController:(UIViewController *)arg1 ;
-(void)setStatusBarContainerView:(UIView *)arg1 ;
-(UINavigationController *)hostingNavigationController;
-(void)_presentPasscodeViewWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)_dismissPasscodeViewAnimated:(char)arg1 withReason:(int)arg2 notifyDelegate:(char)arg3 ;
-(void)setPincodeDismissalAllowed:(char)arg1 ;
-(void)setPasscodeViewVisible:(char)arg1 ;
-(void)_notifyDelegateOfPasscodeViewVisibilityChange;
-(char)_shouldShowCancelButton;
-(void)_updateStatusBar:(id)arg1 ;
-(UIViewController *)presentorViewController;
-(UIView *)statusBarContainerView;
-(void)_didFinishDismissingPasscodeViewWithReason:(int)arg1 notifyDelegate:(char)arg2 ;
-(void)_notifyDelegateOfPasscodeViewDismissalWithReason:(int)arg1 ;
-(char)pincodeDismissalAllowed;
-(char)switchFromKeypadToKeyboard;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GAXPasscodeViewControllerDelegate>)arg1 ;
-(id<GAXPasscodeViewControllerDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(int)presentationStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)setPane:(id)arg1 ;
-(char)requiresKeyboard;
-(char)useProgressiveDelays;
-(char)validatePIN:(id)arg1 ;
-(char)isNumericPIN;
-(id)stringsBundle;
-(void)_updateErrorTextAndFailureCount:(char)arg1 ;
-(void)cancelButtonTapped;
-(char)simplePIN;
-(char)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)_slidePasscodeField;
-(void)didAcceptSetPIN;
-(void)setPIN:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(int)pinLength;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)passcode;
@end
