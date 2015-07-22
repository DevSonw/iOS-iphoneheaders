/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface RadioTrackAsset : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSString * downloadKey; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,copy,readonly) NSArray * sinfs; 
@property (nonatomic,retain,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)flavor;
-(NSArray *)sinfs;
-(NSString *)downloadKey;
-(NSURL *)URL;
-(NSDictionary *)responseDictionary;
@end
