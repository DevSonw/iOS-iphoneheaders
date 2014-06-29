/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_hi.bundle/TextInput_hi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_hi/TextInput_hi-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@class NSRegularExpression, NSDictionary, NSMutableDictionary;

@interface TIKeyboardInputManager_hi : TIKeyboardInputManagerZephyr {

	NSRegularExpression* _combinedRegex;
	NSDictionary* _vowels;
	NSDictionary* _matras;
	NSDictionary* _consonants;
	bool _isQWERTYLayout;
	NSMutableDictionary* _candidatesCache;

}
-(void)dealloc;
-(id)candidates;
-(id)keyboardBehaviors;
-(bool)usesCandidateSelection;
-(unsigned long long)initialSelectedIndex;
-(id)autocorrection;
-(id)replacementForDoubleSpace;
-(void)updateQWERTYLayoutForInputMode:(id)arg1 ;
-(id)defaultTransliteration:(id)arg1 ;
-(void)setupTransliteration;
-(TIInputManagerZephyr*)initImplementation;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(bool)arg2 ;
-(void)refreshInputManagerState;
@end
