/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerInternal, NSString, NSArray, NSError;

@interface AVPlayer : NSObject {

	AVPlayerInternal* _player;

}

@property (assign,nonatomic) BOOL allowsOutOfBandTextTrackRendering; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (assign,nonatomic) BOOL appliesMediaSelectionCriteriaAutomatically; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (assign,nonatomic) BOOL allowsPixelBufferPoolSharing; 
@property (getter=isAudioPlaybackEnabledAtAllRates,nonatomic,readonly) BOOL audioPlaybackEnabledAtAllRates; 
@property (assign,nonatomic) float minRateForAudioPlayback; 
@property (assign,nonatomic) float maxRateForAudioPlayback; 
@property (setter=_setDisplaysUsedForPlayback:,nonatomic,copy) NSArray * _displaysUsedForPlayback; 
@property (nonatomic,readonly) long long _externalProtectionStatus; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
+(BOOL)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+(id)playerWithURL:(id)arg1 ;
+(id)playerWithPlayerItem:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfCurrentItem;
+(BOOL)automaticallyNotifiesObserversOfRate;
+(id)keyPathsForValuesAffectingRate;
+(BOOL)automaticallyNotifiesObserversOfUserVolume;
+(BOOL)automaticallyNotifiesObserversOfVibrationPattern;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingMuted;
+(BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+(id)keyPathsForValuesAffectingActionAtItemEnd;
+(id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+(BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+(BOOL)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+(BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+(BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+(void)initialize;
-(BOOL)allowsOutOfBandTextTrackRendering;
-(void)setAllowsOutOfBandTextTrackRendering:(BOOL)arg1 ;
-(BOOL)autoSwitchStreamVariants;
-(BOOL)preparesItemsForPlaybackAsynchronously;
-(id)_audioOutputDeviceUniqueID;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(void)setAutoSwitchStreamVariants:(BOOL)arg1 ;
-(void)setPreparesItemsForPlaybackAsynchronously:(BOOL)arg1 ;
-(id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(BOOL)_appliesMediaSelectionCriteriaAutomatically;
-(BOOL)appliesMediaSelectionCriteriaAutomatically;
-(id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setAppliesMediaSelectionCriteriaAutomatically:(BOOL)arg1 ;
-(BOOL)_disallowsAMRAudio;
-(BOOL)_disallowsHardwareAcceleratedVideoDecoder;
-(BOOL)disallowsHardwareAcceleratedVideoDecoder;
-(void)setDisallowsHardwareAcceleratedVideoDecoder:(BOOL)arg1 ;
-(BOOL)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(BOOL)_allowsPixelBufferPoolSharing;
-(BOOL)allowsPixelBufferPoolSharing;
-(void)setAllowsPixelBufferPoolSharing:(BOOL)arg1 ;
-(id)playerAVAudioSession;
-(long long)_clientPriority;
-(void)_setClientPriority:(long long)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(BOOL)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(BOOL)arg1 ;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(BOOL)_resumePlayback:(double)arg1 error:(id*)arg2 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1 ;
-(void)_setClientName:(id)arg1 ;
-(id)_clientName;
-(void)_didFinishSuspension:(id)arg1 ;
-(BOOL)_iapdExtendedModeIsActive;
-(long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1 ;
-(BOOL)_hasAssociatedAVPlayerLayerInPIPMode;
-(BOOL)_carplayIsActive;
-(BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
-(BOOL)_hasAssociatedOnscreenAVPlayerLayer;
-(BOOL)_shouldDetachVideoLayersFromFigPlayer;
-(void)_willEnterForeground:(id)arg1 ;
-(void)removeAudioPlaybackRateLimits;
-(BOOL)isAudioPlaybackEnabledAtAllRates;
-(void)setMinRateForAudioPlayback:(float)arg1 ;
-(float)minRateForAudioPlayback;
-(void)setMaxRateForAudioPlayback:(float)arg1 ;
-(float)maxRateForAudioPlayback;
-(long long)_extractVerifiedFPExternalProtectionStatus:(id)arg1 ;
-(BOOL)_outputObscuredDueToInsufficientExternalProtection;
-(id)_playbackDisplaysForFigPlayer;
-(NSArray *)_displaysUsedForPlayback;
-(void)_setDisplaysUsedForPlayback:(id)arg1 ;
-(BOOL)outputObscuredDueToInsufficientExternalProtection;
-(long long)_externalProtectionStatus;
-(void)_updateClosedCaptionLayerBounds:(id)arg1 ;
-(void)_removeLayer:(id)arg1 ;
-(id)_cachedValueForKey:(id)arg1 ;
-(void)_noteDisplaySize:(CGSize)arg1 forPlayerLayer:(id)arg2 ;
-(void)_conformVideoLayer:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_stateDispatchQueue;
-(void)_addLayer:(id)arg1 withPixelBufferAttributes:(id)arg2 ;
-(id)_weakReference;
-(id)expectedAssetTypes;
-(id)vibrationPattern;
-(BOOL)_insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)_checkDefaultsWriteForPerformanceLogging;
-(void)_removeFPListeners;
-(void)_stopObservingPropertiesOfCurrentItem:(id)arg1 ;
-(void)_removeAllLayers;
-(void)_willAccessKVOForKey:(id)arg1 ;
-(void)_didAccessKVOForKey:(id)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueFigPlayerRef)_copyFigPlayer;
-(void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)_startObservingPropertiesOfCurrentItem:(id)arg1 ;
-(void)_setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
-(void)_coordinateWithRemovalOfItem:(id)arg1 ;
-(BOOL)_removeItem:(id)arg1 ;
-(BOOL)_attachItem:(id)arg1 andPerformOperation:(long long)arg2 withObject:(id)arg3 ;
-(void)_addFPListeners;
-(id)_propertyStorage;
-(void)_attachVideoLayersToFigPlayer;
-(void)_attachClosedCaptionLayersToFigPlayer;
-(void)_attachFigPlayerToSubtitleLayers;
-(void)_setNeroVideoGravityOnFigPlayer;
-(BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2 ;
-(void)_changeStatusToFailedWithError:(id)arg1 ;
-(void)_createPlayer:(long long)arg1 item:(id)arg2 preparationRequested:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setCurrentItem:(id)arg1 ;
-(float)_rate;
-(void)setRate:(float)arg1 withVolumeRampDuration:(SCD_Struct_CM4)arg2 ;
-(void)seekToDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_createPrerollID;
-(int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_unregisterAndReturnRetainedPrerollCompletionHandler;
-(float)_playerVolume;
-(BOOL)_isMuted;
-(long long)_defaultActionAtItemEnd;
-(long long)_actionAtItemEnd;
-(void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(BOOL)arg2 ;
-(BOOL)_isClosedCaptionDisplayEnabled;
-(BOOL)_isDisplayingClosedCaptions;
-(BOOL)_allowsExternalPlayback;
-(BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
-(BOOL)_externalPlaybackActive;
-(BOOL)_airPlayVideoActive;
-(BOOL)_usesAudioOnlyModeForExternalPlayback;
-(void)_detachVideoLayersFromFigPlayer;
-(void)_detachClosedCaptionLayersFromFigPlayer;
-(void)_detachFigPlayerFromSubtitleLayers;
-(id)_closedCaptionLayers;
-(id)_subtitleLayers;
-(id)_videoLayers;
-(id)_fpNotificationNames;
-(id)_copyPerformanceDataForCurrentItem;
-(id)initWithDispatchQueue:(id)arg1 ;
-(BOOL)_isChangingValueForKey:(id)arg1 ;
-(void)_currentItemStatusIsReadyToPlay;
-(void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(void)_removeAllItems;
-(void)seekToTime:(SCD_Struct_CM4)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_CM4)arg2 atHostTime:(SCD_Struct_CM4)arg3 ;
-(void)prerollAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingPrerolls;
-(void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(CFDictionaryRef)arg2 ;
-(void)setVibrationPattern:(id)arg1 ;
-(BOOL)isDisplayingClosedCaptions;
-(BOOL)allowsAirPlayVideo;
-(void)setAllowsAirPlayVideo:(BOOL)arg1 ;
-(BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
-(void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1 ;
-(id)_pixelBufferAttributeMediator;
-(id)_avPlayerLayers;
-(void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItemRef)arg1 ;
-(BOOL)_shouldLogPerformanceData;
-(void)_logPerformanceDataForPreviousItem;
-(void)_logPerformanceDataForCurrentItem;
-(BOOL)isAirPlayVideoActive;
-(void)play;
-(id)initWithPlayerItem:(id)arg1 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_CM4)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isClosedCaptionDisplayEnabled;
-(BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 ;
-(id)externalPlaybackVideoGravity;
-(void)setExternalPlaybackVideoGravity:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 ;
-(long long)actionAtItemEnd;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(void)setMuted:(BOOL)arg1 ;
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setExpectedAssetTypes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)_items;
-(id)currentItem;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)pause;
-(long long)status;
-(NSError *)error;
-(id)dispatchQueue;
-(BOOL)isMuted;
-(float)rate;
-(void)setRate:(float)arg1 ;
-(void)finalize;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)removeTimeObserver:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(SCD_Struct_CM4)currentTime;
-(void)seekToTime:(SCD_Struct_CM4)arg1 toleranceBefore:(SCD_Struct_CM4)arg2 toleranceAfter:(SCD_Struct_CM4)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setClosedCaptionDisplayEnabled:(BOOL)arg1 ;
-(BOOL)isExternalPlaybackActive;
-(BOOL)allowsExternalPlayback;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)seekToTime:(SCD_Struct_CM4)arg1 ;
-(long long)externalPlaybackType;
@end
