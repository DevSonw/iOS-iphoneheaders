/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>
#import <Setup/BuddyTCSubControllerDelegate.h>
#import <Setup/BuddyUpgradeStoreAccountSignInPageDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Setup/MBManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol BuddyControllerDelegate, OS_dispatch_queue;
@class MBManager, NSTimer, NSArray, NSMutableArray, RestorableBackupItem, RestoreProgressView, NSObject, NSString, SSAccount, SSTermsAndConditions, UIAlertView, NSDateComponentsFormatter;

@interface RestoreFromBackupController : BuddyTableViewController <BuddyController, BuddyTCSubControllerDelegate, BuddyUpgradeStoreAccountSignInPageDelegate, UITableViewDataSource, UITableViewDelegate, MBManagerDelegate, UIAlertViewDelegate> {

	id<BuddyControllerDelegate> _delegate;
	MBManager* _backupManager;
	NSTimer* _refreshTimer;
	NSArray* _backupList;
	NSArray* _similarRestorables;
	NSMutableArray* _visibleSimilarRestorables;
	NSMutableArray* _otherRestorables;
	NSMutableArray* _visibleOtherRestorables;
	RestorableBackupItem* _selectedRestorable;
	int _listState;
	char _showAllFooterPresent;
	int _restoreState;
	SBSProcessAssertionRef _restoringProcessAssertion;
	RestoreProgressView* _restoreProgressView;
	NSObject*<OS_dispatch_queue> _update_backup_list_queue;
	char _appleAccountRemoved;
	int _compatibleRestoresState;
	NSString* _activeStoreAccount;
	NSMutableArray* _storeAccountsToSignIn;
	SSAccount* _currentStoreAccount;
	SSTermsAndConditions* _currentStoreTerms;
	char _signInWasSilent;
	UIAlertView* _storeTermsAgreeConfirmationAlert;
	UIAlertView* _storeTermsDisagreeConfirmationAlert;
	UIAlertView* _preRestoreWarningAlert;
	NSString* _spinnerIdentifier;
	NSDateComponentsFormatter* _durationFormatter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controllerWasPopped;
-(void)_startRestore;
-(void)setListState:(int)arg1 ;
-(id)mostSimilarRestorablesInsertRemainingIntoArray:(id)arg1 getOtherUniqueDevicesCount:(unsigned*)arg2 ;
-(void)_updateTable:(id)arg1 toMatchArray:(id)arg2 withVisibleArray:(id)arg3 maxVisible:(unsigned)arg4 fromOldSection:(int)arg5 toNewSection:(int)arg6 ;
-(void)updateVisibleSnapshots;
-(id)filteredRestorableItemsFromBackupList:(id)arg1 ;
-(void)setBackupList:(id)arg1 withError:(id)arg2 ;
-(void)updateBackupList;
-(void)takeProcessAssertion;
-(void)registerKeychainCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeOldStoreSignInAndTermsPages;
-(void)upgradeStoreAccountSignInPageDidSignInWithUsername:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSpinningForIdentifier:(id)arg1 ;
-(void)startSpinningWithIdentifier:(id)arg1 ;
-(id)alertViewForBackupError:(id)arg1 ;
-(void)showStoreSignIn;
-(void)showRestoreProgressView;
-(void)showStoreTermsIfNeeded;
-(void)refreshBackupListFromTimer:(id)arg1 ;
-(void)removePrimaryAppleAccount;
-(void)_showNextStoreAccountTerms;
-(void)_showStoreTermsForAccount:(id)arg1 ;
-(char)shouldSetCloudRestoreMiniBuddyBreadcrumb;
-(char)shouldSetPaymentRestoreMiniBuddyBreadcrumb;
-(void)releaseProcessAssertion;
-(void)showAllBackups;
-(id)restorableItemAtIndexPath:(id)arg1 ;
-(void)setupWithAlternateChoice:(id)arg1 ;
-(void)restoreSelectedSnapshot;
-(void)buddyTCSubController:(id)arg1 didFinishWithAgree:(char)arg2 ;
-(void)upgradeStoreAccountSignInPageDidSkip;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)significantTimeChange;
-(int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(id)titleText;
-(void)willResignActive;
@end
