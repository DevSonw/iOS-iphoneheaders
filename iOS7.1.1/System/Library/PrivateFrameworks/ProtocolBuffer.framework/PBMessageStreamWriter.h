/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {

	NSOutputStream* _stream;

}
-(void)dealloc;
-(id)initWithOutputStream:(id)arg1 ;
-(bool)writeMessage:(id)arg1 ;
@end

