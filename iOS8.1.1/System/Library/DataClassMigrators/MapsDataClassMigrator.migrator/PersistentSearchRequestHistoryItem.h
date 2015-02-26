/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/NSCopying.h>
#import <MapsDataClassMigrator/HistoryItem.h>
#import <MapsDataClassMigrator/HistoryPersistentItem.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <NSCopying, HistoryItem, HistoryPersistentItem> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	double _timestamp;
	NSString* _displayLocation;
	NSString* _displayQuery;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	SCD_Struct_Pe9 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                        //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayLocation; 
@property (nonatomic,retain) NSString * displayLocation;                     //@synthesize displayLocation=_displayLocation - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                            //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                           //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithPersistedHistoryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(int)type;
-(NSString *)displayQuery;
-(NSString *)syncIdentifier;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(BOOL)hasSyncIdentifier;
-(void)setDisplayQuery:(NSString *)arg1 ;
-(void)setDisplayLocation:(NSString *)arg1 ;
-(void)setLatitudeSpan:(double)arg1 ;
-(BOOL)hasDisplayQuery;
-(void)setLongitudeSpan:(double)arg1 ;
-(void)setHasLatitudeSpan:(BOOL)arg1 ;
-(BOOL)hasLatitudeSpan;
-(void)setHasLongitudeSpan:(BOOL)arg1 ;
-(double)longitudeSpan;
-(BOOL)hasLongitudeSpan;
-(double)latitudeSpan;
-(BOOL)hasDisplayLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(GEOPlaceSearchResponse *)response;
-(GEOPlaceSearchRequest *)request;
-(id)dictionaryRepresentation;
-(NSString *)displayLocation;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(BOOL)hasResponse;
-(BOOL)hasRequest;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasPosition;
-(void)setHasPosition:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
@end
