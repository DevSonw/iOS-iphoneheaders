/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView {

	NSArray* _currentSnapshotCharacters;
	NSArray* _incomingSnapshotCharacters;
	NSAttributedString* _currentAttributedText;
	id _pendingAttributedString;
	unsigned long long _pendingDirection;
	BOOL _pendingPushPerCharacter;
	double _currentAnimationFinishTime;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2 ;
-(void)_setIncomingSnapshotCharacters:(id)arg1 ;
-(void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2 ;
-(void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2 ;
-(void)_layoutForPushStartWithDirection:(unsigned long long)arg1 ;
-(void)_processPendingStringIfNeeded;
-(void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(BOOL)arg3 ;
-(void)_setCurrentSnapshotCharacters:(id)arg1 ;
-(void)sizeToFitAttributedText:(id)arg1 ;
-(void)setAttributedTextUnanimated:(id)arg1 ;
-(id)currentAttributedText;
@end
