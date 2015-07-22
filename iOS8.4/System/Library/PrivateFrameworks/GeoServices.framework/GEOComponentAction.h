/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOComponentAction : PBCodable <NSCopying> {

	SCD_Struct_GE54* _actions;
	int _component;
	BOOL _handleLocally;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasComponent; 
@property (assign,nonatomic) int component;                                  //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,readonly) int* actions; 
@property (assign,nonatomic) BOOL hasHandleLocally; 
@property (assign,nonatomic) BOOL handleLocally;                             //@synthesize handleLocally=_handleLocally - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int*)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(int)actionsAtIndex:(unsigned long long)arg1 ;
-(void)addActions:(int)arg1 ;
-(void)setComponent:(int)arg1 ;
-(void)setHasComponent:(BOOL)arg1 ;
-(BOOL)hasComponent;
-(void)setActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHandleLocally:(BOOL)arg1 ;
-(void)setHasHandleLocally:(BOOL)arg1 ;
-(BOOL)hasHandleLocally;
-(int)component;
-(BOOL)handleLocally;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
