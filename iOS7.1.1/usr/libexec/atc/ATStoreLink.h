/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/atc
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/SSDownloadManagerObserver.h>
#import <Foundation/SSDownloadHandlerDelegate.h>

@protocol ATStoreLinkDelegate;
@class SSDownloadManager, SSDownloadHandler, ATAssetManager, NSObject;

@interface ATStoreLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate> {

	SSDownloadManager* _downloadManager;
	SSDownloadHandler* _downloadHandler;
	BOOL _handlerApplied;
	ATAssetManager* _assetManager;
	NSObject<ATStoreLinkDelegate>* _delegate;

}

@property (assign,nonatomic) NSObject<ATStoreLinkDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SSDownloadManager * downloadManager;                 //@synthesize downloadManager=_downloadManager - In the implementation block
-(void)removeHandler;
-(void)pauseAssets:(id)arg1 ;
-(void)applyHandler;
-(void)enqueueAssetsWithManager:(id)arg1 forDataclass:(id)arg2 ;
-(void)resumeAssets:(id)arg1 ;
-(void)kickDownloads;
-(void)cancelAssets:(id)arg1 ;
-(void)_downloadHandler:(id)arg1 handleDownloadSession:(id)arg2 ;
-(void)_downloadHandler:(id)arg1 handleInstallSession:(id)arg2 ;
-(id)_storeKindForAssetType:(id)arg1 ;
-(id)_storeKindsForDataclass:(id)arg1 ;
-(id)downloadsFromAssets:(id)arg1 ;
-(id)pausedDownloadsFromAssets:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadHandler:(id)arg1 handleSession:(id)arg2 ;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)downloadManager;
@end
