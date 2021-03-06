/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADClient.h>
#import <OfficeImport/OADTextClient.h>

@class WDAAnchor, WDATextBox, OADDrawable, NSString;

@interface WDAContent : NSObject <OADClient, OADTextClient> {

	WDAAnchor* mAnchor;
	WDATextBox* mTextBox;
	OADDrawable* mDrawable;
	int mTextType;

}

@property (nonatomic,readonly) WDAAnchor * anchor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForType:(unsigned short)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(char)hasText;
-(WDAAnchor *)anchor;
-(char)floating;
-(char)hasBounds;
-(id)drawable;
-(BOOL)isShape;
-(id)textBox;
-(int)textType;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 ;
-(id)createAnchor;
-(void)clearAnchor;
-(id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2 ;
-(void)setTextBox:(id)arg1 document:(id)arg2 ;
-(BOOL)isLine;
-(BOOL)isTopLevelObject;
@end

