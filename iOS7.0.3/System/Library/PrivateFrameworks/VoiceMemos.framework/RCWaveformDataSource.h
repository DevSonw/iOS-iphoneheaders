/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol RCWaveformDataSource <NSObject>
@property (nonatomic,readonly) RCWaveform * waveform; 
@required
-(void)reload;
-(double)duration;
-(void)finishLoadingBeforeDate:(id)arg1 loadingFinishedBlock:(/*^block*/ id)arg2;
-(void)beginLoadingForRecordingOutputURL:(id)arg1;
-(id)waveformGenerator;
-(id)waveform;
-(id)dataSourceByReloading;
@end
