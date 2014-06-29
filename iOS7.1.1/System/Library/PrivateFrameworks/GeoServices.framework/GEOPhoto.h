/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	NSMutableArray* _photoInfos;
	int _photoType;
	NSString* _uid;
	SCD_Struct_GE55 _has;

}

@property (assign,nonatomic) bool hasPhotoType; 
@property (assign,nonatomic) int photoType;                            //@synthesize photoType=_photoType - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoInfos;              //@synthesize photoInfos=_photoInfos - In the implementation block
@property (nonatomic,readonly) bool hasUid; 
@property (nonatomic,retain) NSString * uid;                           //@synthesize uid=_uid - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)uid;
-(bool)hasUid;
-(void)setPhotoInfos:(id)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(unsigned long long)photoInfosCount;
-(void)clearPhotoInfos;
-(id)photoInfoAtIndex:(unsigned long long)arg1 ;
-(void)setPhotoType:(int)arg1 ;
-(void)setHasPhotoType:(bool)arg1 ;
-(bool)hasPhotoType;
-(int)photoType;
-(id)photoInfos;
-(void)setUid:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
