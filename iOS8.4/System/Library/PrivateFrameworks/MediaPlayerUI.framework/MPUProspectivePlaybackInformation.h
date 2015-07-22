/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/NSCopying.h>

@class RURadioStationPlaybackMetadata;

@interface MPUProspectivePlaybackInformation : NSObject <NSCopying>

@property (nonatomic,readonly) BOOL isRadioProspectivePlaybackInformation; 
@property (nonatomic,readonly) RURadioStationPlaybackMetadata * stationMetadata; 
-(RURadioStationPlaybackMetadata *)stationMetadata;
-(BOOL)isRadioProspectivePlaybackInformation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
