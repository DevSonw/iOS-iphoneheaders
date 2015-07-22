/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUMediaPlayerItem, NSString, NSNumber;

@interface SUScriptMediaPlayerItem : SUScriptObject {

	SUMediaPlayerItem* _mediaItem;

}

@property (copy) NSString * backgroundImageURL; 
@property (copy) NSString * bookmarkIdentifier; 
@property (copy) NSString * initialOrientation; 
@property (retain) NSNumber * itemIdentifier; 
@property (copy) NSString * itemType; 
@property (retain) NSNumber * playableDuration; 
@property (copy) NSString * subtitle; 
@property (copy) NSString * title; 
@property (copy) NSString * URL; 
+(id)webScriptNameForKey:(const char*)arg1 ;
-(NSNumber *)playableDuration;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)URL;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setBackgroundImageURL:(NSString *)arg1 ;
-(NSString *)backgroundImageURL;
-(id)attributeKeys;
-(NSString *)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(NSString *)arg1 ;
-(NSString *)initialOrientation;
-(void)setInitialOrientation:(NSString *)arg1 ;
-(void)setPlayableDuration:(NSNumber *)arg1 ;
-(id)copyNativeMediaPlayerItem;
@end
