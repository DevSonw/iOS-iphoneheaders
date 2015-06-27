/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:28:01 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator {

	unsigned _migrationLevel;

}
-(void)_migrateLibraryFilesIntoContainer;
-(void)_migrateCloudTabsMetadataOutOfContainer;
-(char)_migrateSearchSettings;
-(void)_removeBookmarksPanelStatePreferences;
-(char)_migrateAutofillPasswordAndPreferences;
-(void)_migrateAutofillContactInfo;
-(char)_migrateAuthenticationCredentials;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(void)_clearReadingListFetcherPendingChanges;
-(void)_removeObsoleteDirectories;
-(char)_symlinkCookieStorage;
-(void)_removeAutocompleteOffBypassSettings;
-(void)_migrateLegacyWebKitPreferences;
-(void)_migrateLegacyWebKitWebsiteData;
-(void)_migrateWebClipIconFilesToClassD;
-(void)_migrateFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(id)dataClassName;
-(id)init;
-(char)performMigration;
@end
