/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAStreamingContentConsumer.h>

@protocol MFCollectingDataConsumer, MFMessageDataConsumerFactory;
@class NSMutableData;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {

	int _requestedFormat;
	<MFCollectingDataConsumer>* _dataConsumer;
	<MFCollectingDataConsumer>* _alternatePartConsumer;
	<MFMessageDataConsumerFactory>* _consumerFactory;
	bool _triedCreatingAlternatePartConsumer;
	bool _didBeginStreaming;
	bool _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;

}

@property (assign,nonatomic) int requestedFormat;                                             //@synthesize requestedFormat=_requestedFormat - In the implementation block
@property (nonatomic,retain) <MFCollectingDataConsumer> * dataConsumer;                       //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (nonatomic,retain) <MFCollectingDataConsumer> * alternatePartConsumer;              //@synthesize alternatePartConsumer=_alternatePartConsumer - In the implementation block
@property (nonatomic,retain) <MFMessageDataConsumerFactory> * consumerFactory;                //@synthesize consumerFactory=_consumerFactory - In the implementation block
@property (nonatomic,readonly) NSMutableData * bodyData;                                      //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) double timeOfLastActivity;                                     //@synthesize timeOfLastActivity=_timeOfLastActivity - In the implementation block
-(id)bodyData;
-(void)dealloc;
-(id)data;
-(bool)didBeginStreaming;
-(double)timeOfLastActivity;
-(bool)succeeded;
-(void)setRequestedFormat:(int)arg1 ;
-(void)setDataConsumer:(id)arg1 ;
-(void)setConsumerFactory:(id)arg1 ;
-(id)dataConsumerForPart:(id)arg1 ;
-(bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(id)consumerFactory;
-(void)setAlternatePartConsumer:(id)arg1 ;
-(id)alternatePartConsumer;
-(id)dataConsumer;
-(int)requestedFormat;
@end
