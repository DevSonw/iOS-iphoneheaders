/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUActivity.h>
#import <PhotosUI/PUPhotoStreamComposeServiceDelegate.h>
#import <PhotosUI/PUVideoTrimQueueControllerDelegate.h>

@protocol PLUserEditableAlbumProtocol, PUAlbumStreamActivityDelegate;
@class PUPhotoStreamComposeServiceViewController, UIViewController, PUVideoTrimQueueController, PUActivityItemSourceController, NSObject;

@interface PUAlbumStreamActivity : PUActivity <PUPhotoStreamComposeServiceDelegate, PUVideoTrimQueueControllerDelegate> {

	PUPhotoStreamComposeServiceViewController* _streamComposeVc;
	double _startTime;
	double _endTime;
	UIViewController* _presenterViewController;
	UIViewController* _activityController;
	PUVideoTrimQueueController* _trimController;
	bool _isPresentedFromActivityViewController;
	bool _destinationAlbumWasCreated;
	PUActivityItemSourceController* _itemSourceController;
	NSObject<PLUserEditableAlbumProtocol>* _destinationStreamingAlbum;
	UIViewController* _referenceViewController;
	<PUAlbumStreamActivityDelegate>* _delegate;

}

@property (assign,setter=setPresentedFromActivityViewController:,nonatomic) bool isPresentedFromActivityViewController;              //@synthesize isPresentedFromActivityViewController=_isPresentedFromActivityViewController - In the implementation block
@property (nonatomic,retain) NSObject<PLUserEditableAlbumProtocol> * destinationStreamingAlbum;                                      //@synthesize destinationStreamingAlbum=_destinationStreamingAlbum - In the implementation block
@property (assign) bool destinationAlbumWasCreated;                                                                                  //@synthesize destinationAlbumWasCreated=_destinationAlbumWasCreated - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * referenceViewController;                                                      //@synthesize referenceViewController=_referenceViewController - In the implementation block
@property (assign,nonatomic,__weak) <PUAlbumStreamActivityDelegate> * delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
+(long long)activityCategory;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(void).cxx_destruct;
-(bool)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setItemSourceController:(id)arg1 ;
-(id)itemSourceController;
-(bool)destinationAlbumWasCreated;
-(id)destinationStreamingAlbum;
-(void)controller:(id)arg1 didFinishTrimmingAssets:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingAssets:(id)arg2 ;
-(void)_showVideoTooLongAlert;
-(void)setReferenceViewController:(id)arg1 ;
-(id)referenceViewController;
-(void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg1 ;
-(bool)_sharedAlbumAllowsAdding:(NSObject*)arg1 ;
-(void)_createStreamsPickerContainerWithExisting:(bool)arg1 ;
-(void)_prepareToPost:(id)arg1 albumName:(id)arg2 recipients:(id)arg3 comments:(id)arg4 ;
-(bool)isPresentedFromActivityViewController;
-(void)_performPresentationOnViewController:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setDestinationAlbumWasCreated:(bool)arg1 ;
-(void)setDestinationStreamingAlbum:(id)arg1 ;
-(void)_handleDismissWithSuccess:(bool)arg1 ;
-(void)_publishAssets:(id)arg1 andTrimmedVideoPathInfo:(id)arg2 toAlbum:(id)arg3 orCreateWithName:(id)arg4 comment:(id)arg5 invitationRecipients:(id)arg6 wantsPublicWebsite:(bool)arg7 completion:(/*^block*/ id)arg8 ;
-(id)_selectedVideo;
-(void)presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setPresentedFromActivityViewController:(bool)arg1 ;
@end
