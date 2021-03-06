/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWAudioFormat : BWFormat {

	opaqueCMFormatDescriptionRef _audioFormatDescription;
	NSDictionary* _avAudioSettings;

}

@property (readonly) opaqueCMFormatDescriptionRef audioFormatDescription; 
@property (readonly) NSDictionary * audioCompressionSBPOptions; 
+(void)initialize;
+(id)formatWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)formatForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)_initWithAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)_initForAVAudioSettings:(id)arg1 inputFormat:(id)arg2 ;
-(opaqueCMFormatDescriptionRef)audioFormatDescription;
-(NSDictionary *)audioCompressionSBPOptions;
-(unsigned long)mediaType;
@end

