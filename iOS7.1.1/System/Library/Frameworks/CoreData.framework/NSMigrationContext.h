/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMigrationManager, NSEntityMapping, NSPropertyMapping;

@interface NSMigrationContext : NSObject {

	NSMutableDictionary* _bySourceAssociationTable;
	NSMutableDictionary* _byDestinationAssociationTable;
	NSMutableDictionary* _byMappingBySourceAssociationTable;
	NSMutableDictionary* _byMappingByDestinationAssociationTable;
	NSMigrationManager* _migrationManager;
	NSEntityMapping* _currentMapping;
	unsigned long long _currentStep;
	NSPropertyMapping* _currentPropertyMapping;

}
-(void)setCurrentPropertyMapping:(id)arg1 ;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)clearAssociationTables;
-(void)setCurrentMigrationStep:(unsigned long long)arg1 ;
-(void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)initWithMigrationManager:(id)arg1 ;
-(id)currentEntityMapping;
-(void)setCurrentEntityMapping:(id)arg1 ;
-(id)currentPropertyMapping;
-(unsigned long long)currentMigrationStep;
-(id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2 ;
-(id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2 ;
-(void)dealloc;
@end
