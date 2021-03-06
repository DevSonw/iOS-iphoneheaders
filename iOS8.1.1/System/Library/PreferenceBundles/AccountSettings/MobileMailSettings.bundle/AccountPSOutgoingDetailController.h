/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/AccountPSDetailControllerBase.h>

@class MailAccount;

@interface AccountPSOutgoingDetailController : AccountPSDetailControllerBase {

	MailAccount* _viewingAccount;
	MailAccount* _primaryForAccount;
	unsigned _isPrimary : 1;
	unsigned _isDynamic : 1;
	unsigned _isCarrierAccount : 1;
	unsigned _enableAsAlternate : 1;
	unsigned _disableAsDynamic : 1;

}
+(id)outgoingGroupSpecifiers;
+(id)outgoingSpecifiers;
+(BOOL)shouldPresentAsModalSheet;
-(void)saveAndDismiss;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)propertyValueChanged:(id)arg1 ;
-(void)processValidationResult:(int)arg1 ;
-(BOOL)haveEnoughValues;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(BOOL)arg1 ;
-(void)validateForExistingAccount;
-(void)validateForNewAccount;
-(void)handleValidAccount:(id)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(id)authSchemeValuesForSpecifier:(id)arg1 ;
-(id)authSchemeTitlesForSpecifier:(id)arg1 ;
-(void)_saveAccounts;
-(void)setEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)isEnabled:(id)arg1 ;
-(void)deleteOutgoingAccount;
-(void)_bottomDescriptionWithSpecifier:(id)arg1 ;
-(id)specifiersForExistingAccount;
-(id)specifiersForNewAccount;
-(void)_resetDeliveryAccountsForViewingAccount;
-(void)_finishedAccountSetup;
-(void)_reallyDeleteOutgoingAccount;
-(void)_processDeleteAccountConfirmation:(id)arg1 tag:(long long)arg2 ;
-(void)_updateDoneButton;
-(Class)accountClass;
-(id)specifiers;
@end

