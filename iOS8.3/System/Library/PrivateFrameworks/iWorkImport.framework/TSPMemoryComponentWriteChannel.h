/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUDispatchData, NSString;

@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _streamQueue;
	TSUDispatchData* _streamData;
	char _isClosed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(char)arg1 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(id)serializedData;
@end
