/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	<_MKUserInteractionGestureRecognizerTouchObserver>* _touchObserver;

}

@property (assign,nonatomic,__weak) <_MKUserInteractionGestureRecognizerTouchObserver> * touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)setTouchObserver:(id)arg1 ;
-(id)touchObserver;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
@end
