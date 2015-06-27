/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <MediaServices/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSOutputStream, NSInputStream, NSObject, NSString;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {

	char _closeOnStop;
	z_stream_s* _zstreamp;
	char _compressed;
	unsigned _maximumBufferSize;
	/*^block*/id _canWriteDataBlock;
	/*^block*/id _didFinishWritingBlock;
	/*^block*/id _didEncounterErrorBlock;
	NSOutputStream* _outputStream;
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _queue;
	double _timestamp;
	unsigned long long _bytesWritten;

}

@property (assign,nonatomic) unsigned maximumBufferSize;                       //@synthesize maximumBufferSize=_maximumBufferSize - In the implementation block
@property (assign,getter=isCompressed,nonatomic) char compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long bytesWritten;                  //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,copy) id canWriteDataBlock;                               //@synthesize canWriteDataBlock=_canWriteDataBlock - In the implementation block
@property (nonatomic,copy) id didFinishWritingBlock;                           //@synthesize didFinishWritingBlock=_didFinishWritingBlock - In the implementation block
@property (nonatomic,copy) id didEncounterErrorBlock;                          //@synthesize didEncounterErrorBlock=_didEncounterErrorBlock - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                    //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(id)initWithQueue:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)start;
-(void)stop;
-(void)setDidFinishWritingBlock:(id)arg1 ;
-(void)setDidEncounterErrorBlock:(id)arg1 ;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)didFinishWritingBlock;
-(void)setCanWriteDataBlock:(id)arg1 ;
-(id)_decompressData:(id)arg1 ;
-(void)writeAllData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)writeStreamError:(SCD_Struct_MS3)arg1 ;
-(unsigned)maximumBufferSize;
-(void)setMaximumBufferSize:(unsigned)arg1 ;
-(id)canWriteDataBlock;
-(id)didEncounterErrorBlock;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSInputStream *)inputStream;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setCompressed:(char)arg1 ;
-(unsigned long long)bytesWritten;
-(NSOutputStream *)outputStream;
-(id)initWithOutputStream:(id)arg1 queue:(id)arg2 ;
-(char)writeAllData:(id)arg1 error:(id*)arg2 ;
-(char)isCompressed;
@end
