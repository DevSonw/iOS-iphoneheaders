/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface DataClassMigrator : NSObject {

	NSDictionary* _context;

}

@property (nonatomic,retain) NSDictionary * context;                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL didRestoreFromBackup; 
@property (nonatomic,readonly) BOOL didMigrateBackupFromDifferentDevice; 
@property (nonatomic,readonly) BOOL didRestoreFromCloudBackup; 
@property (nonatomic,readonly) BOOL shouldPreserveSettingsAfterRestore; 
@property (nonatomic,readonly) BOOL wasPasscodeSetInBackup; 
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(id)context;
-(void)setContext:(id)arg1 ;
-(BOOL)didRestoreFromBackup;
-(BOOL)didMigrateBackupFromDifferentDevice;
-(BOOL)didRestoreFromCloudBackup;
-(BOOL)shouldPreserveSettingsAfterRestore;
-(BOOL)wasPasscodeSetInBackup;
-(void).cxx_destruct;
@end
