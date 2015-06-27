/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class WebScriptObject, NSString;

@interface SKScriptStoreSheetRequest : SUScriptObject {

	int _pageStyle;
	WebScriptObject* _productParameters;
	NSString* _productURL;

}

@property (assign) int productPageStyle; 
@property (retain) WebScriptObject * productParameters; 
@property (retain) NSString * productURL; 
@property (readonly) int productPageStyleAutomatic; 
@property (readonly) int productPageStyleBanner; 
@property (readonly) int productPageStylePad; 
@property (readonly) int productPageStylePhone; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
-(NSString *)productURL;
-(WebScriptObject *)productParameters;
-(void)setProductParameters:(WebScriptObject *)arg1 ;
-(void)setProductURL:(NSString *)arg1 ;
-(id)_safeValueForValue:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)newNativeStorePageRequest;
-(id)_className;
-(int)productPageStyleAutomatic;
-(int)productPageStyleBanner;
-(int)productPageStylePad;
-(int)productPageStylePhone;
-(id)attributeKeys;
@end
