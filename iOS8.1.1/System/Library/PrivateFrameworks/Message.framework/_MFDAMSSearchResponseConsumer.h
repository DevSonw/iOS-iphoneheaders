/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <Message/DASearchQueryConsumer.h>

@class NSDate, MFConditionLock, NSMutableArray, NSArray;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {

	NSDate* latestDateToAdd;
	MFConditionLock* doneCondition;
	double timeReceivedLastResponse;
	unsigned totalCount;
	NSMutableArray* matchingRemoteIDs;

}

@property (nonatomic,retain) NSDate * latestDateToAdd; 
@property (nonatomic,retain,readonly) NSArray * matchingRemoteIDs; 
-(void)dealloc;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(BOOL)handleItems:(id)arg1 ;
-(void)waitUntilDone;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setLatestDateToAdd:(NSDate *)arg1 ;
-(void)resetDoneCondition;
-(NSArray *)matchingRemoteIDs;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2 ;
-(NSDate *)latestDateToAdd;
@end
