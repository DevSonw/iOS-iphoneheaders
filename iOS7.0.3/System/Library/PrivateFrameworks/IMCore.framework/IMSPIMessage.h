/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSAttributedString, NSArray, NSURL, NSDate, IMSPIHandle;

@interface IMSPIMessage : NSObject {

	NSString* _guid;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _subject;
	NSArray* _recipients;
	NSURL* _url;
	NSDate* _date;
	IMSPIHandle* _sender;
	long long _messageID;
	BOOL _isOutgoing;
	BOOL _isRead;

}

@property (retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign) long long messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (retain) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (retain) IMSPIHandle * sender;                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (assign) BOOL isOutgoing;                                  //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (assign) BOOL isRead;                                      //@synthesize isRead=_isRead - In the implementation block
-(void)setSender:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)date;
-(id)text;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(void)setDate:(id)arg1 ;
-(id)sender;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(BOOL)isOutgoing;
-(BOOL)isRead;
-(void)setMessageID:(long long)arg1 ;
-(void)setIsRead:(BOOL)arg1 ;
-(void)setIsOutgoing:(BOOL)arg1 ;
-(id)guid;
-(long long)messageID;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
@end

