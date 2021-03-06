/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPVolumeSlider.h>

@class UIColor;

@interface MPUNowPlayingVolumeSlider : MPVolumeSlider {

	UIColor* _maximumTintUsedForTrackImageColor;
	UIColor* _minimumTintUsedForTrackImageColor;

}
-(void)_availableRoutesDidChangeNotification:(id)arg1 ;
-(id)_newVolumeWarningView;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)_updateTrackTintForVolumeControlAvailability;
-(id)_trackImageWithTintColor:(id)arg1 ;
-(void)setPlayer:(id)arg1 ;
@end

