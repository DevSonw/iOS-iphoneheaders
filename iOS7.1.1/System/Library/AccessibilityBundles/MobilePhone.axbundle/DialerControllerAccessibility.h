/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/MobilePhone.axbundle/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/DialerControllerAccessibility_super.h>

@interface DialerControllerAccessibility : DialerControllerAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2 ;
-(bool)_accessibilitySupportsHandwriting;
-(int)_accessibilityHandwritingAttributePreferredCharacterSet;
-(bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
-(bool)_accessibilityHandwritingAttributeAcceptsRawInput;
-(int)_accessibilityHandwritingAttributeAllowedCharacterSets;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilityReplaceCharacterAtCursor:(id)arg1 ;
@end

