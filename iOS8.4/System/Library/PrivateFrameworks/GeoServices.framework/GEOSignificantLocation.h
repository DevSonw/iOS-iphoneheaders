/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOSignificantLocation : PBCodable <NSCopying> {

	double _confidence;
	NSString* _identifier;
	GEOLocation* _location;
	unsigned _locationIndex;
	unsigned _numberOfVisitsBucket;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocationIndex; 
@property (assign,nonatomic) unsigned locationIndex;                     //@synthesize locationIndex=_locationIndex - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucket; 
@property (assign,nonatomic) unsigned numberOfVisitsBucket;              //@synthesize numberOfVisitsBucket=_numberOfVisitsBucket - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)setLocationIndex:(unsigned)arg1 ;
-(void)setHasLocationIndex:(BOOL)arg1 ;
-(BOOL)hasLocationIndex;
-(void)setNumberOfVisitsBucket:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucket:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucket;
-(void)setConfidence:(double)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(unsigned)locationIndex;
-(unsigned)numberOfVisitsBucket;
-(double)confidence;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
@end
