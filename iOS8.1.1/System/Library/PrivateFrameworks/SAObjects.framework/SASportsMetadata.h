/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * average; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadata;
+(id)metadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)identifier;
-(void)setValue:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)value;
-(void)setSelected:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)selected;
-(id)encodedClassName;
-(NSNumber *)average;
-(void)setAverage:(NSNumber *)arg1 ;
@end
