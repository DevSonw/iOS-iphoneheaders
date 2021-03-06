/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLPhotoLibrary, PLManagedObjectContext, PLGatekeeperClient;

@interface PLKeywordManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLManagedObjectContext* _libraryContext;
	PLGatekeeperClient* _assetsdClient;

}
+(id)writeQueue;
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)keywordsForAssets:(id)arg1 ;
-(id)keywordsForAsset:(id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAssetUUID:(id)arg2 ;
-(id)_keywordsForAsset:(id)arg1 ;
-(id)keywordObjectsForKeywords:(id)arg1 ;
-(id)allKeywords;
-(id)keywordsForAssetWithUUID:(id)arg1 ;
@end

