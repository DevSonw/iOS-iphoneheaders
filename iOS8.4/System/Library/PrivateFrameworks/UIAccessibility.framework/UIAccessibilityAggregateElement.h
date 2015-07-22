/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {

	NSArray* _representedElements;

}

@property (nonatomic,retain) NSArray * representedElements;              //@synthesize representedElements=_representedElements - In the implementation block
-(id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setRepresentedElements:(NSArray *)arg1 ;
-(NSArray *)representedElements;
-(void)addRepresentedObject:(id)arg1 ;
@end
