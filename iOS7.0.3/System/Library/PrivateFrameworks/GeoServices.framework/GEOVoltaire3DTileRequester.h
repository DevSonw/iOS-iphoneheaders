/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
+(id)queryStringFromKey:(const GEOTileKey*)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)arg1 useStatusCodes:(BOOL*)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
@end
