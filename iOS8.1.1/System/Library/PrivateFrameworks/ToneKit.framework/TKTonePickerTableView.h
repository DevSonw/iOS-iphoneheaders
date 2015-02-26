/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver;
@interface TKTonePickerTableView : UITableView {

	id<TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;

}

@property (assign,nonatomic) id<TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver;              //@synthesize layoutMarginsObserver=_layoutMarginsObserver - In the implementation block
-(void)layoutMarginsDidChange;
-(id<TKTonePickerTableViewLayoutMarginsObserver>)layoutMarginsObserver;
-(void)setLayoutMarginsObserver:(id<TKTonePickerTableViewLayoutMarginsObserver>)arg1 ;
@end
