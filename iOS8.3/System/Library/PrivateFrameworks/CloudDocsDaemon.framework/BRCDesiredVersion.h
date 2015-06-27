/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:16 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>
#import <CloudDocsDaemon/PQLBindable.h>

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLBindable> {

	SCD_Union_BR17 _flags;
	NSError* _downloadError;
	NSString* _serverName;

}

@property (nonatomic,retain) NSError * downloadError;               //@synthesize downloadError=_downloadError - In the implementation block
@property (nonatomic,readonly) NSString * serverName;               //@synthesize serverName=_serverName - In the implementation block
@property (assign,nonatomic) unsigned options; 
@property (nonatomic,readonly) char isFault; 
@property (nonatomic,readonly) char wantsContent; 
@property (nonatomic,readonly) char userInitiated; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(char)isFault;
-(char)wantsContent;
-(NSError *)downloadError;
-(id)descriptionWithContext:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(char)userInitiated;
-(void)setDownloadError:(NSError *)arg1 ;
-(id)initWithDesiredVersion:(id)arg1 ;
-(id)initWithServerVersion:(id)arg1 serverName:(id)arg2 ;
-(char)isStillValidForEtag:(id)arg1 ;
-(NSString *)serverName;
@end
