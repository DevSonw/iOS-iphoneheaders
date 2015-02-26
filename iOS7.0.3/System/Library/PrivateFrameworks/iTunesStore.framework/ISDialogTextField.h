/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ISDialogTextField : NSObject {

	int _keyboardType;
	BOOL _secure;
	NSString* _title;
	NSString* _value;

}

@property (assign) int keyboardType;                  //@synthesize keyboardType=_keyboardType - In the implementation block
@property (getter=isSecure) BOOL secure;              //@synthesize secure=_secure - In the implementation block
@property (retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (retain) NSString * value;                  //@synthesize value=_value - In the implementation block
+(id)textFieldWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)title;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
@end
