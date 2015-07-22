/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/SearchResultRepr.h>
#import <MapsDataClassMigrator/NSCopying.h>
#import <MapsDataClassMigrator/MKLocatableObject.h>
#import <MapsDataClassMigrator/MKAnnotation.h>
#import <MapsDataClassMigrator/MapsSynced.h>

@class NSString, NSData, AddressBookAddress, UIImage, RouteDurationProvider, GEOComposedWaypoint, MSPBookmarkStorage, MSPPinStorage, MKMapItem, NSURL;

@interface SearchResult : SearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation, MapsSynced> {

	NSString* _singleLineAddress;
	NSString* _singleLineAddressWithHomeCountry;
	BOOL _hasMergedFormattedAddress;
	NSString* _formattedAddress;
	NSString* _formattedAddressMultiline;
	SCD_Struct_Se3 _coordinate;
	BOOL _originatedFromHistory;
	BOOL _originatedFromTrace;
	BOOL _originatedFromBookmarks;
	AddressBookAddress* _address;
	int _appearance;
	unsigned long long _businessID;
	UIImage* _parkingImage;
	RouteDurationProvider* _routeDurationProvider;
	GEOComposedWaypoint* _composedWaypoint;
	MSPBookmarkStorage* _bookmarkStorage;
	MSPPinStorage* _pinStorage;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage; 
@property (assign,nonatomic) SCD_Struct_Se3 coordinate;                                    //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,getter=isReverseGeocoded,nonatomic) BOOL reverseGeocoded; 
@property (nonatomic,readonly) BOOL needsReverseGeocodeCheck; 
@property (assign,nonatomic) BOOL originatedFromHistory;                                   //@synthesize originatedFromHistory=_originatedFromHistory - In the implementation block
@property (assign,nonatomic) BOOL originatedFromTrace;                                     //@synthesize originatedFromTrace=_originatedFromTrace - In the implementation block
@property (nonatomic,readonly) BOOL isDynamicCurrentLocation; 
@property (assign,nonatomic) int appearance;                                               //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) int localSearchProviderID; 
@property (nonatomic,readonly) BOOL isPlaceHolder; 
@property (nonatomic,readonly) NSString * infoCardTitle; 
@property (nonatomic,readonly) NSString * locationTitle; 
@property (nonatomic,readonly) NSString * rawLocationTitle; 
@property (nonatomic,readonly) NSString * disambiguationTitle; 
@property (nonatomic,readonly) NSString * tweetableTitle; 
@property (nonatomic,readonly) NSString * defaultName; 
@property (nonatomic,readonly) NSURL * sharedMapsURL; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * locality; 
@property (nonatomic,retain) GEOComposedWaypoint * composedWaypoint;                       //@synthesize composedWaypoint=_composedWaypoint - In the implementation block
@property (nonatomic,readonly) MSPPinStorage * pinStorage;                                 //@synthesize pinStorage=_pinStorage - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                          //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) RouteDurationProvider * routeDurationProvider; 
@property (nonatomic,retain) NSString * bookmarkTitle; 
@property (nonatomic,retain) AddressBookAddress * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
+(id)customSearchResultWithCoordinate:(SCD_Struct_Se3)arg1 ;
+(id)keyPathsForValuesAffectingSingleLineAddress;
+(id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+(id)keyPathsForValuesAffectingLocationTitle;
+(id)currentLocationSearchResult;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingSubtitle;
-(MSPBookmarkStorage *)bookmarkStorage;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(id)initWithDroppedPin:(id)arg1 ;
-(void)setThoroughfare:(id)arg1 ;
-(id)unknownContact;
-(void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4 ;
-(BOOL)isReverseGeocoded;
-(BOOL)isAddressBookResult;
-(BOOL)originatedFromTrace;
-(void)setOriginatedFromTrace:(BOOL)arg1 ;
-(GEOComposedWaypoint *)composedWaypoint;
-(BOOL)_isEqualToSearchResult:(id)arg1 loose:(BOOL)arg2 ;
-(void)clearAddressCache;
-(void)setOriginalType:(unsigned)arg1 ;
-(BOOL)isDynamicCurrentLocation;
-(id)initWithSearchResult:(id)arg1 address:(id)arg2 ;
-(void)setAddressFromSearchResult:(id)arg1 ;
-(void)setOriginatedFromHistory:(BOOL)arg1 ;
-(BOOL)isLooselyEqualToSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(BOOL)_hasUID;
-(void)setReverseGeocoded:(BOOL)arg1 ;
-(BOOL)originatedFromHistory;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(NSString *)infoCardTitle;
-(BOOL)isLocationEqual:(id)arg1 withinDistance:(double)arg2 ;
-(NSString *)defaultName;
-(NSString *)locationTitle;
-(MSPPinStorage *)pinStorage;
-(void)_updateTypeAndOriginalTypeIfNeeded;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(void)markAsOriginatingFromBookmarks;
-(void)setCoordinate:(SCD_Struct_Se3)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1 ;
-(void)updateWithGEOMapItem:(id)arg1 ;
-(id)_formattedAddressWithSeparator:(id)arg1 ;
-(id)singleLineAddressWithHomeCountry;
-(void)clearLocationInformation;
-(void)_syncGEOPlaceWithCoordinate;
-(id)coordinateString;
-(id)_locationTitleNeedsRaw:(BOOL)arg1 ;
-(BOOL)hasOriginatedFromBookmarks;
-(id)_formattedAddressMultiline;
-(id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1 ;
-(id)_formattedAddress;
-(RouteDurationProvider *)routeDurationProvider;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(SCD_Struct_Se3)arg1 transportType:(unsigned long long)arg2 ;
-(BOOL)isEstimatedTravelTimeValidForOrigin:(SCD_Struct_Se3)arg1 transportType:(unsigned long long)arg2 ;
-(void)getEstimatedTravelTimeForTransportType:(unsigned long long)arg1 getDistanceBasedWalkingRecommendation:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setEstimatedTravelTime:(double)arg1 distance:(double)arg2 fromOrigin:(SCD_Struct_Se3)arg3 transportType:(unsigned long long)arg4 ;
-(BOOL)looksLikeBusiness;
-(BOOL)isEqualToSearchResult:(id)arg1 ;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(id)copyWithCoordinate:(SCD_Struct_Se3)arg1 ;
-(id)bookmarkRepresentation;
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(NSURL *)sharedMapsURL;
-(BOOL)_hasStructuredAddress;
-(BOOL)needsReverseGeocodeCheck;
-(BOOL)isInMapRect:(SCD_Struct_Se4)arg1 ;
-(id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2 ;
-(id)copyForBookmarksWithType:(unsigned)arg1 name:(id)arg2 zoomLevel:(unsigned)arg3 ;
-(id)copyWithType:(unsigned)arg1 ;
-(id)initWithGEOPlace:(id)arg1 ;
-(void)becomeDefaultTypeIfCustomType;
-(NSString *)rawLocationTitle;
-(NSString *)disambiguationTitle;
-(NSString *)tweetableTitle;
-(NSString *)bookmarkTitle;
-(BOOL)isInMapRegion:(id)arg1 ;
-(void)setComposedWaypoint:(GEOComposedWaypoint *)arg1 ;
-(id)singleLineAddress;
-(BOOL)isPlaceHolder;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(AddressBookAddress *)address;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)name;
-(void)setType:(unsigned)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)_commonInit;
-(id)initWithType:(unsigned)arg1 ;
-(int)appearance;
-(NSString *)subtitle;
-(id)addressDictionary;
-(void)setAddress:(AddressBookAddress *)arg1 ;
-(id)mapsURL;
-(int)localSearchProviderID;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithGEOMapItem:(id)arg1 ;
-(NSString *)locality;
-(NSString *)countryCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(SCD_Struct_Se3)coordinate;
-(void)setCoordinate:(SCD_Struct_Se3)arg1 ;
-(unsigned long long)businessID;
-(NSData *)syncData;
-(void)setAppearance:(int)arg1 ;
@end
