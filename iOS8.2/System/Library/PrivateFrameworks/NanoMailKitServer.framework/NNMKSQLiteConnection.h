/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSObject, NSMutableDictionary;

@interface NNMKSQLiteConnection : NSObject {

	char _isInTransaction;
	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSMutableDictionary* _cachedPreparedStatementsKeyedBySQLPattern;

}

@property (assign,nonatomic) sqlite3Ref db;                                                                //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) char isInTransaction;                                                         //@synthesize isInTransaction=_isInTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;                                         //@synthesize dbQueue=_dbQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreparedStatementsKeyedBySQLPattern;              //@synthesize cachedPreparedStatementsKeyedBySQLPattern=_cachedPreparedStatementsKeyedBySQLPattern - In the implementation block
+(char)errorCodeMeansCorruptedDatabase:(int)arg1 ;
-(char)rollbackTransaction;
-(void)dealloc;
-(char)commitTransaction;
-(sqlite3Ref)db;
-(char)beginTransaction;
-(char)isInTransaction;
-(int)executeSQL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(void)setDb:(sqlite3Ref)arg1 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(void)_closeDatabase;
-(id)initWithPath:(id)arg1 protectData:(char)arg2 errorCode:(int*)arg3 ;
-(char)tableExists:(id)arg1 inDatabase:(id)arg2 ;
-(int)stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(char)_openDatabaseWithPath:(id)arg1 protectData:(char)arg2 errorCode:(int*)arg3 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 cacheStatement:(char)arg2 ;
-(sqlite3_stmtRef)_preparedStatementForPattern:(id)arg1 cacheStatement:(char)arg2 ;
-(int)_stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(int)_lastErrorCode;
-(id)_lastErrorMessage;
-(int)_runRetryingIfNeeded:(/*^block*/id)arg1 ;
-(void)setIsInTransaction:(char)arg1 ;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)cachedPreparedStatementsKeyedBySQLPattern;
-(void)setCachedPreparedStatementsKeyedBySQLPattern:(NSMutableDictionary *)arg1 ;
-(int)_executeSQL:(id)arg1 ;
-(id)lastErrorMessage;
-(int)lastErrorCode;
@end
