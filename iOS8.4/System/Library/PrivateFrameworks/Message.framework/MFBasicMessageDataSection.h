/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMessageDataSection.h>

@class NSData, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection> {

	NSData* _data;
	BOOL _complete;
	BOOL _partial;
	NSString* _partName;

}

@property (assign,getter=isPartial,nonatomic) BOOL partial;                //@synthesize partial=_partial - In the implementation block
@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * partName;                          //@synthesize partName=_partName - In the implementation block
-(BOOL)isComplete;
-(void)dealloc;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)isPartial;
-(NSString *)partName;
-(void)setPartial:(BOOL)arg1 ;
-(void)setPartName:(NSString *)arg1 ;
@end
