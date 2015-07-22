/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface CAMAvalancheIndicatorView : UIView {

	BOOL _showsWhenStarted;
	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (assign,nonatomic) BOOL showsWhenStarted;                    //@synthesize showsWhenStarted=_showsWhenStarted - In the implementation block
@property (nonatomic,readonly) UIView * _backgroundView;               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                  //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;              //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
-(long long)_numberOfPhotos;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(void)reset;
-(CGSize)intrinsicContentSize;
-(void)_updateCountLabelWithNumberOfPhotos;
-(void)_commonCAMAvalancheIndicatorViewInitialization;
-(void)_performCaptureAnimation;
-(BOOL)showsWhenStarted;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)setShowsWhenStarted:(BOOL)arg1 ;
-(UILabel *)_countLabel;
@end
