/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIApplication.h>
#import <MobileMail/MFAppPerformanceTesting.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <AVFoundation/MCProfileConnectionObserver.h>
#import <MobileMail/MFUserAgent.h>
#import <MobileMail/AutoFetchControllerDataSource.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <MobileMail/MailComposeDeliveryControllerDelegate.h>

@protocol OS_dispatch_source;
@class UIWindow, MFAppBadgeController, MailMasterDetailViewController, MailDetailViewController, MailNavigationController, AccountSetupController, MailboxPickerController, ComposeNavigationController, NSObject, NSConditionLock, MFComposeScrollView, MFMessage, NSMutableSet, MailErrorHandler, _MFMailCompositionContext, MFAttachmentLibraryManager, NSString, NSURL, UIImageView, NSArray, NSSet;

@interface MailAppController : UIApplication <MFAppPerformanceTesting, UINavigationControllerDelegate, UIApplicationDelegate, UIAlertViewDelegate, MCProfileConnectionObserver, MFUserAgent, AutoFetchControllerDataSource, MFMailComposeViewControllerDelegate, MailComposeDeliveryControllerDelegate> {

	UIWindow* _window;
	MFAppBadgeController* _badgeController;
	MailMasterDetailViewController* _masterDetailViewController;
	MailDetailViewController* _detailViewController;
	MailNavigationController* _navigationController;
	AccountSetupController* _accountSetupController;
	MailboxPickerController* _mailboxPickerController;
	ComposeNavigationController* _composeViewController;
	ComposeNavigationController* _nonModalComposeViewController;
	id _waitingObject;
	SEL _waitingSelector;
	NSObject<OS_dispatch_source>* diagnostic_signal_source;
	NSObject<OS_dispatch_source>* multipurpose_signal_source;
	unsigned _shouldRestoreAutosavedMessageOnResume : 1;
	unsigned _shouldSelectDefaultMailboxOnResume : 1;
	unsigned _shouldTerminateInBackground : 1;
	unsigned _is24HourTime : 1;
	unsigned _accountSetupFinished : 1;
	NSConditionLock* _autosavingLock;
	BOOL _isEditingExistingDraft;
	MFComposeScrollView* _composeScrollViewTapped;
	MFMessage* _focusedMessage;
	NSMutableSet* _networkMonitors;
	opaque_pthread_mutex_t _activityLock;
	CFDictionaryRef _emptiedTrashTimestamps;
	MailErrorHandler* _errorHandler;
	_MFMailCompositionContext* _contextForComposeFromURL;
	/*^block*/ id _composeCompletionBlock;
	MFAttachmentLibraryManager* _defaultAttachmentManager;
	NSString* _lastSelectedAccountId;
	NSString* _lastDefaultImageUpdateReason;
	unsigned _numberOfActiveAccounts;
	unsigned _numberOfInactiveAccounts;
	NSURL* _savedMailtoURL;
	NSURL* _postponedMessageURL;
	UIImageView* _simulatedDefaultPNGOverlayView;
	BOOL _finishedLaunching;
	int _protectedDataAvailability;
	/*^block*/ id _blockToPerformWhenProtectedDataIsAvailable;
	BOOL _deferredNetworkDefaultsRegistration;
	int _accountChangeNotificationToken;
	NSArray* _mailAccounts;
	NSArray* _orderedAccounts;
	NSSet* _selectedAccounts;
	NSSet* _displayedAccounts;

}

@property (nonatomic,readonly) BOOL finishedLaunching;                           //@synthesize finishedLaunching=_finishedLaunching - In the implementation block
@property (nonatomic,readonly) NSArray * orderedAccounts;                        //@synthesize orderedAccounts=_orderedAccounts - In the implementation block
@property (nonatomic,readonly) NSSet * selectedAccounts;                         //@synthesize selectedAccounts=_selectedAccounts - In the implementation block
@property (copy) NSSet * displayedAccounts;                                      //@synthesize displayedAccounts=_displayedAccounts - In the implementation block
@property (nonatomic,retain) NSArray * mailAccounts;                             //@synthesize mailAccounts=_mailAccounts - In the implementation block
@property (nonatomic,copy) <NSCoding> * lastAutosaveIdentifier; 
@property (nonatomic,copy) NSString * lastDefaultImageUpdateReason;              //@synthesize lastDefaultImageUpdateReason=_lastDefaultImageUpdateReason - In the implementation block
@property (nonatomic,retain) NSURL * savedMailtoURL;                             //@synthesize savedMailtoURL=_savedMailtoURL - In the implementation block
@property (nonatomic,retain) NSURL * postponedMessageURL;                        //@synthesize postponedMessageURL=_postponedMessageURL - In the implementation block
@property (assign,nonatomic) int protectedDataAvailability;                      //@synthesize protectedDataAvailability=_protectedDataAvailability - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(void)_messageLibraryWillBecomeUnavailable:(id)arg1 ;
-(void)_messageLibraryDidBecomeAvailable:(id)arg1 ;
-(void)_messageLibraryDidFinishReconciliation:(id)arg1 ;
-(void)_accountURLDidChange:(id)arg1 ;
-(void)_accountsOrderDidChange:(id)arg1 ;
-(void)registerServices;
-(void)_snapshotTaken:(id)arg1 ;
-(void)_composeScrollViewTapped:(id)arg1 ;
-(void)_userEnteredPassword:(id)arg1 ;
-(id)displayedAccounts;
-(id)orderedAccounts;
-(void)_selectDefaultMailboxDismissingModalAnimated:(BOOL)arg1 ;
-(id)accountsToSelect;
-(void)accountSetupControllerDidChange:(id)arg1 finished:(BOOL)arg2 ;
-(unsigned)sourceTypeToSelect;
-(void)setSelectedSourceType:(unsigned)arg1 ;
-(BOOL)displayingAccountSetup;
-(void)_dismissAnyModalViewControllerOrPopoverAnimated:(BOOL)arg1 ;
-(void)_presentAccountSetupController;
-(void)_dismissAccountSetupControllerAnimated:(BOOL)arg1 ;
-(void)_dismissComposeViewControllerAnimated:(BOOL)arg1 ;
-(void)showComposeWithContext:(id)arg1 animated:(BOOL)arg2 initialTitle:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(BOOL)isMasterViewShownOnTop;
-(void)_presentAccountRestrictionAlertIfNecessary;
-(void)_initializeWindowRootViewControllerOnce;
-(void)_debugTap:(id)arg1 ;
-(void)_refetchAfterAccountSetup;
-(id)mailboxPickerController;
-(id)savedMailtoURL;
-(void)setSavedMailtoURL:(id)arg1 ;
-(void)scheduleObsoleteAccountDataVacuum;
-(void)_performBackEndOneShotInitialization;
-(id)lastAutosaveIdentifier;
-(void)_fixMainThreadPriorityIfSingleCoreDeviceAfterDelay:(double)arg1 ;
-(id)toolbarsTintColor;
-(void)_selectDefaultMailbox;
-(void)_switchToComposeWithAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)selectedAccounts;
-(void)removeDefaultImagesWithReason:(id)arg1 ;
-(void)_updateStatus:(id)arg1 forMonitor:(id)arg2 ;
-(void)_mailWasSent:(id)arg1 ;
-(void)_updateTimePreferences;
-(id)_viewControllerForComposition;
-(void)setComposeViewController:(id)arg1 forModalDisplay:(BOOL)arg2 ;
-(BOOL)isShowingCompose;
-(void)setComposeViewController:(id)arg1 ;
-(void)_dismissComposeViewControllerAnimated:(BOOL)arg1 afterSending:(BOOL)arg2 ;
-(void)displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3 ;
-(void)markAccountURLStringAsObsolete:(id)arg1 ;
-(BOOL)accountURLStringIsObsolete:(id)arg1 ;
-(void)_resetToDefaultState;
-(void)_resetAccounts;
-(void)_releaseAllAccountConnections;
-(void)_resetLinesOfText;
-(void)_updateStateForThreadingChange;
-(void)updateDefaultImageWithReason:(id)arg1 ;
-(int)linesOfText:(BOOL)arg1 ;
-(void)setLastDefaultImageUpdateReason:(id)arg1 ;
-(void)_reallyUpdateDefaultImage;
-(id)lastDefaultImageUpdateReason;
-(BOOL)_isInternallyHandledURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 useSelectedAccount:(BOOL)arg2 ;
-(id)postponedMessageURL;
-(void)setPostponedMessageURL:(id)arg1 ;
-(void)_hideSimulatedDefaultPNG;
-(void)_showSimulatedDefaultPNG;
-(void)_saveCompositionAsDraft;
-(void)_composeViewDidDismiss:(id)arg1 ;
-(id)composeAccountIsDefault:(BOOL*)arg1 ;
-(void)setLastAutosaveIdentifier:(id)arg1 ;
-(void)cleanUpAfterSuspend;
-(void)_networkConfigurationChanged:(id)arg1 ;
-(void)_updateStatus:(id)arg1 ;
-(void)_handleDeliveryFailure:(id)arg1 ;
-(void)_deliveryQueueProcessingFinished:(id)arg1 ;
-(void)_unsentCountChanged:(id)arg1 ;
-(void)delayedStartupTasks;
-(void)_releaseAllForcedConnections;
-(void)_hideStatusBarProgress;
-(void)willPerformVisibleStoreFetch:(id)arg1 ;
-(void)resumeCompositionOfDraft:(id)arg1 ;
-(id)_activeNonLocalAccountsWithMailAccounts:(id)arg1 inactiveCount:(unsigned*)arg2 ;
-(void)setDisplayedAccounts:(id)arg1 ;
-(void)_resetSelectedAccounts;
-(void)updateAutoFetchState:(BOOL)arg1 ;
-(void)gatherStatisticsWithAccounts:(id)arg1 ;
-(void)_displayError:(id)arg1 context:(id)arg2 ;
-(void)setStatusBarShowsMailProgress:(id)arg1 ;
-(id)toolbarLabelsTextColorInView:(id)arg1 ;
-(void)cancelPreviousPerformRequestsWhenProtectedDataIsAvailable;
-(void)performWhenProtectedDataIsAvailable:(/*^block*/ id)arg1 ;
-(void)_setProtectedDataAvailabilityWithNotification:(id)arg1 ;
-(BOOL)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 account:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)copySourcesCurrentlyVisible;
-(void)mailComposeDeliveryControllerWillAttemptToSend:(id)arg1 ;
-(void)mailComposeDeliveryControllerDidAttemptToSend:(id)arg1 outgoingMessageDelivery:(id)arg2 ;
-(void)mailComposeDeliveryControllerDidAttemptToSaveDraft:(id)arg1 account:(id)arg2 result:(unsigned)arg3 ;
-(id)defaultAttachmentManager;
-(int)linesOfText;
-(BOOL)is24HourTime;
-(BOOL)prefersRightToLeftInterfaceLayout;
-(void)pulledToRefresh:(id)arg1 ;
-(void)composeButtonLongPressed:(id)arg1 ;
-(void)setSelectedAccounts:(id)arg1 ;
-(BOOL)showingMultipleAccounts;
-(void)emptyTrashForAccount:(id)arg1 ;
-(BOOL)canPerformNetworkOperationOnAccount:(id)arg1 ;
-(void)updateTextAndShadowColorsOfToolbarLabel:(id)arg1 inView:(id)arg2 ;
-(id)sidebarTintColor;
-(id)toolbarFixedSpaceItem;
-(BOOL)finishedLaunching;
-(void)setProtectedDataAvailability:(int)arg1 ;
-(void)_messageContentLayerFinished;
-(void)waitForUIToSettleDown;
-(void)switchToDesiredMailbox;
-(void)startScrollMessageListTest:(id)arg1 withOptions:(id)arg2 ;
-(void)startScrollMessagesInEditModeWithSelectionTest:(id)arg1 ;
-(void)startScrollMessagesInEditModeTest:(id)arg1 ;
-(void)startShowDismissComposeTest:(id)arg1 ;
-(void)startShowComposeTest:(id)arg1 ;
-(void)startDismissComposeTest:(id)arg1 ;
-(void)startExitEditModeTest:(id)arg1 ;
-(void)startMessageTransferTest:(id)arg1 multiSelect:(BOOL)arg2 ;
-(void)startMessageDeleteTest:(id)arg1 ;
-(void)startMessageIterationTest:(id)arg1 ;
-(id)getControllerOfType:(Class)arg1 ;
-(id)getAccount;
-(id)getMailboxListViewControllerMail;
-(void)switchToInbox;
-(id)getMailboxWithName:(id)arg1 ;
-(id)getMailboxContentViewController;
-(id)getMailboxPickerController;
-(void)_performScrollTestOnMessageList:(id)arg1 withController:(id)arg2 ;
-(id)_prepareForScrollMessagesTest:(id)arg1 inEditMode:(BOOL)arg2 ;
-(void)_reallyStartScrollMessagesInEditModeWithSelectionTest:(id)arg1 ;
-(id)_prepareForScrollMailboxesTest:(id)arg1 ;
-(void)reallyStartScrollMessageListTest:(id)arg1 ;
-(void)_didShowComposeForFirstTime:(id)arg1 ;
-(void)_didShowComposeLandscape:(id)arg1 ;
-(void)_didShowCompose:(id)arg1 ;
-(void)_reallyStartShowComposeTest:(id)arg1 ;
-(void)_prepareForShowComposeTest:(id)arg1 ;
-(void)_didDismissComposeLandscape:(id)arg1 ;
-(void)_didDismissCompose:(id)arg1 ;
-(void)_reallyStartDismissComposeTest:(id)arg1 ;
-(void)_prepareForDismissComposeTest:(id)arg1 ;
-(void)_didFinishExitEditModeTest:(id)arg1 ;
-(void)_reallyStartExitEditModeTest:(id)arg1 ;
-(void)_reallyStartMessageTransferTest:(id)arg1 mailboxController:(id)arg2 ;
-(void)_reallyStartMessageDeleteTest:(id)arg1 ;
-(id)getMessageViewController;
-(void)_performNextShowDismissComposeTransition;
-(void)runAllTests;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)popoverManager;
-(void)mailComposeControllerCompositionFinished:(id)arg1 ;
-(void)composeShortcutInvoked:(id)arg1 ;
-(void)reportPPTTimings:(id)arg1 ;
-(void)didChangeOrientation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationWillSuspend;
-(BOOL)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)rootViewController;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)setStatusBarShowsProgress:(BOOL)arg1 ;
-(void)significantTimeChange;
-(id)keyCommands;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)failedTest:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(id)_visibleViewController;
-(void)composeButtonClicked:(id)arg1 ;
-(BOOL)canRegisterForAPSPush;
-(void)focusedMessageDidChange:(id)arg1 ;
-(void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2 ;
-(id)focusedMessage;
-(id)mailAccounts;
-(BOOL)isMobileMail;
-(void)setMailAccounts:(id)arg1 ;
-(void)startListeningForNotifications;
-(void)systemDidWake;
-(void)systemWillSleep;
-(int)protectedDataAvailability;
-(BOOL)isAllowedToAccessProtectedData;
-(void)networkActivityStarted:(id)arg1 ;
-(void)networkActivityEnded:(id)arg1 ;
-(BOOL)isForeground;
-(BOOL)isTesting;
@end
