/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SPSearchResult;

@interface SPApplication : NSObject {

	NSString* _displayIdentifier;
	NSString* _displayName;
	NSString* _longDisplayName;

}

@property (nonatomic,retain) NSString * displayIdentifier;                 //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * longDisplayName;                   //@synthesize longDisplayName=_longDisplayName - In the implementation block
@property (nonatomic,readonly) SPSearchResult * searchResult; 
-(void)setDisplayName:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)displayIdentifier;
-(NSString *)displayName;
-(SPSearchResult *)searchResult;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
-(void)setLongDisplayName:(NSString *)arg1 ;
-(NSString *)longDisplayName;
@end

