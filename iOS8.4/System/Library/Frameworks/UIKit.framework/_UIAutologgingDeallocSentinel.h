/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	BOOL _called;
	NSString* _message;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL called;                     //@synthesize called=_called - In the implementation block
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)called;
-(void)setCalled:(BOOL)arg1 ;
@end

