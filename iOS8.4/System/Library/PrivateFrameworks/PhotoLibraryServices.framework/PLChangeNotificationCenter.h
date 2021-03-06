/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSNumber, NSMutableArray, NSMutableSet, PLManagedObjectContext, NSMapTable, NSDictionary, NSNotificationCenter;

@interface PLChangeNotificationCenter : NSObject {

	BOOL _isProcessingRemoteDidSave;
	int _cameraPreviewChangeListenerCount;
	NSNumber* _cameraPreviewChangedToken;
	NSMutableArray* _snapshots;
	changeList_s _changedAlbumLists;
	contentChanges_s _albumListsContent;
	changeList_s _changedAlbums;
	contentChanges_s _albumsContent;
	changeList_s _changedAssets;
	NSMutableSet* _assetsWithCloudCommentChanges;
	contentChanges_s _momentsContent;
	changeList_s _changedMoments;
	contentChanges_s _momentListsContent;
	changeList_s _changedMomentLists;
	changeList_s _changedCloudFeedEntries;
	PLManagedObjectContext* _moc;
	NSMutableArray* _enqueuedNotifications;
	NSMapTable* _changedInflightAssetsAlbumsToSnapshots;
	NSDictionary* _remoteNotificationData;
	BOOL _isOverloaded;
	NSMutableSet* _overloadedObjects;

}

@property (nonatomic,retain,readonly) NSNotificationCenter * backingCenter; 
@property (nonatomic,readonly) BOOL _shouldForceFetchingAlbumsToReload; 
+(id)defaultCenter;
+(void)getInsertedAssetCount:(unsigned long long*)arg1 deletedAssetCount:(unsigned long long*)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4 ;
+(id)allManagedObjectKeysStrategy;
+(void)forceFetchingAlbumReload;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)postShouldReloadNotification;
-(void)processContextDidChangeNotification:(id)arg1 ;
-(void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 isCoalescedEvent:(BOOL)arg4 ;
-(void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)processContextDidSaveNotification:(id)arg1 ;
-(NSNotificationCenter *)backingCenter;
-(id)_takeSnapshotOfObject:(id)arg1 ;
-(void)_saveCurrentStateForAlbum:(id)arg1 ;
-(void)_splitContextDidChangeNotification:(id)arg1 ;
-(void)_sendNotificationsForSplitChanges;
-(id)descriptionOfSplitChanges;
-(void)_enqueuePhotoLibraryNotifications;
-(void)_enqueueAlbumNotifications;
-(void)_enqueueMomentChangeNotifications;
-(void)_enqueueAlbumListNotifications;
-(void)_enqueueMomentListChangeNotifications;
-(void)_enqueueCloudCommentsNotifications;
-(void)_enqueueCloudFeedEntriesChangeNotifications;
-(void)_enqueueAssetChangeNotification;
-(void)_cleanupState;
-(void)_postEnqueuedNotifications;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id*)arg3 forKeys:(const id*)arg4 count:(unsigned long long)arg5 ;
-(id)_snapshotForObject:(id)arg1 ;
-(void)_enqueueAssetContainerListChangeNotification:(id)arg1 ;
-(void)_enqueueAlbumChangeNotification:(id)arg1 ;
-(void)_enqueueInvitationRecordsChangeNotification:(id)arg1 ;
-(void)enqueueNotification:(id)arg1 ;
-(void)_enqueueAssetContainerChangeNotification:(id)arg1 ;
-(BOOL)_isInterestedInUpdatesOfObject:(id)arg1 ;
-(id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1 ;
-(BOOL)_shouldForceFetchingAlbumsToReload;
-(void)_evaluateContainersWithUpdatedContent;
-(void)_evaluateUpdatedAssets;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)_keysOfInterestForObject:(id)arg1 ;
-(id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2 ;
-(void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)_registerForCameraPreviewWellChanges;
-(void)_unregisterForCameraPreviewWellChanges;
-(void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(void)addInvitationRecordsObserver:(id)arg1 ;
-(void)removeInvitationRecordsObserver:(id)arg1 ;
-(void)addCloudFeedEntriesObserver:(id)arg1 ;
-(void)removeCloudFeedEntriesObserver:(id)arg1 ;
-(void)addAssetChangeObserver:(id)arg1 ;
-(void)removeAssetChangeObserver:(id)arg1 ;
-(void)addShouldReloadObserver:(id)arg1 ;
-(void)removeShouldReloadObserver:(id)arg1 ;
-(void)inflightAssetsAlbumWillChange:(id)arg1 ;
-(id)_orderedRelationshipsOfInterestForObject:(id)arg1 ;
-(id)_attributesOfInterestForObject:(id)arg1 ;
-(id)_toOneRelationshipsOfInterestForObject:(id)arg1 ;
-(void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addCameraPreviewWellImageChangeObserver:(id)arg1 ;
-(void)removeCameraPreviewWellImageChangeObserver:(id)arg1 ;
@end

