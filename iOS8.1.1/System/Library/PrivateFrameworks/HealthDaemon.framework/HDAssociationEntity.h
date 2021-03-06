/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDAssociationEntity : HDDataEntity
+(void)load;
+(id)createTableSQL;
+(long long)protectionClass;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)_propertySettersForDataObject;
+(void)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 database:(id)arg4 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(id)_insertAssociationEntryWithAssociation:(id)arg1 object:(id)arg2 database:(id)arg3 ;
+(void)_enumerateObjectIDsWithPredicate:(id)arg1 database:(id)arg2 callback:(/*^block*/id)arg3 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)objectIDsForAssociationEntity:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(BOOL)_removeAssociationRecordsForAssociationEntity:(id)arg1 database:(id)arg2 ;
+(BOOL)_removeAssociationRecordsForObject:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_insertAssociationTuples:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)databaseTable;
@end

