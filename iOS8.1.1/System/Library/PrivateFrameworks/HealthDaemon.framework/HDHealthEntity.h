/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDHealthEntity : HDSQLiteEntity
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(BOOL)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(BOOL)setValuesWithDictionary:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)propertyValuesForAnyWithProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(void)performReadTransactionWithHealthDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(id)createTableSQL;
+(long long)protectionClass;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)performReadTransactionWithHealthDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)_performWriteTransaction:(BOOL)arg1 withHealthDatabase:(id)arg2 usingBlock:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
+(id)protectedDatabaseName;
+(BOOL)performWriteTransactionWithHealthDatabase:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)databaseName;
@end
