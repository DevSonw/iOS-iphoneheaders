/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, NSString, CKDPProtectionInfo, CKDPRecordIdentifier, CKDPShareIdentifier, CKDPDateStatistics, CKDPRecordType;

@interface CKDPRecord : PBCodable <NSCopying> {

	NSMutableArray* _conflictLoserEtags;
	CKDPIdentifier* _createdBy;
	NSString* _etag;
	NSMutableArray* _fields;
	CKDPIdentifier* _modifiedBy;
	NSString* _modifiedByDevice;
	NSMutableArray* _pluginFields;
	CKDPProtectionInfo* _protectionInfo;
	NSString* _protectionInfoTag;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPShareIdentifier* _shareId;
	CKDPDateStatistics* _timeStatistics;
	CKDPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedBy; 
@property (nonatomic,retain) CKDPIdentifier * createdBy;                           //@synthesize createdBy=_createdBy - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeStatistics; 
@property (nonatomic,retain) CKDPDateStatistics * timeStatistics;                  //@synthesize timeStatistics=_timeStatistics - In the implementation block
@property (nonatomic,retain) NSMutableArray * fields;                              //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                        //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedBy; 
@property (nonatomic,retain) CKDPIdentifier * modifiedBy;                          //@synthesize modifiedBy=_modifiedBy - In the implementation block
@property (nonatomic,retain) NSMutableArray * conflictLoserEtags;                  //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedByDevice; 
@property (nonatomic,retain) NSString * modifiedByDevice;                          //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
@property (nonatomic,retain) NSMutableArray * pluginFields;                        //@synthesize pluginFields=_pluginFields - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                  //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;                         //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
+(id)recordFromData:(id)arg1 ;
-(void)_inflateFieldsFromData:(id)arg1 ;
-(id)fieldData;
-(id)fieldForKey:(id)arg1 ;
-(id)dataRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(CKDPRecordType *)arg1 ;
-(CKDPRecordType *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(NSString *)etag;
-(NSMutableArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSMutableArray *)arg1 ;
-(NSString *)modifiedByDevice;
-(void)setPluginFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pluginFields;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasProtectionInfo;
-(BOOL)hasProtectionInfoTag;
-(CKDPProtectionInfo *)protectionInfo;
-(NSString *)protectionInfoTag;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(void)addFields:(id)arg1 ;
-(void)clearFields;
-(void)setTimeStatistics:(CKDPDateStatistics *)arg1 ;
-(BOOL)hasTimeStatistics;
-(CKDPDateStatistics *)timeStatistics;
-(void)addConflictLoserEtags:(id)arg1 ;
-(void)addPluginFields:(id)arg1 ;
-(void)setCreatedBy:(CKDPIdentifier *)arg1 ;
-(unsigned long long)fieldsCount;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)setModifiedBy:(CKDPIdentifier *)arg1 ;
-(unsigned long long)conflictLoserEtagsCount;
-(void)clearConflictLoserEtags;
-(id)conflictLoserEtagsAtIndex:(unsigned long long)arg1 ;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(unsigned long long)pluginFieldsCount;
-(void)clearPluginFields;
-(id)pluginFieldsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCreatedBy;
-(BOOL)hasModifiedBy;
-(BOOL)hasModifiedByDevice;
-(CKDPIdentifier *)createdBy;
-(NSMutableArray *)fields;
-(void)setFields:(NSMutableArray *)arg1 ;
-(CKDPIdentifier *)modifiedBy;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

