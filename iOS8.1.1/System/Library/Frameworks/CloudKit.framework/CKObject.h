/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKPropertyCoding.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>

@property (nonatomic,readonly) CKObjCClass * objcClass; 
@property (nonatomic,readonly) NSSet * propertyNamesNotToEncode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKObjCClass *)objcClass;
-(NSSet *)propertyNamesNotToEncode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(id)dictionaryPropertyEncoding;
@end

