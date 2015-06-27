/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WebStorageManager : NSObject
+(id)_storageDirectoryPath;
+(id)sharedWebStorageManager;
+(void)setStorageDatabaseIdleInterval:(double)arg1 ;
+(void)closeIdleLocalStorageDatabases;
-(id)init;
-(unsigned long long)diskUsageForOrigin:(id)arg1 ;
-(id)origins;
-(void)deleteOrigin:(id)arg1 ;
-(void)deleteAllOrigins;
-(void)syncLocalStorage;
-(void)syncFileSystemAndTrackerDatabase;
@end
