/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>
#import <BookmarkDAV/CoreDAVModifiedContainer.h>
#import <BookmarkDAV/CoreDAVAddedContainer.h>
#import <BookmarkDAV/CoreDAVLeafDataPayload.h>

@class NSDictionary, NSMutableArray, NSString, CoreDAVErrorItem, NSArray, NSURL, NSData;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {

	NSDictionary* _appleAttributes;
	NSMutableArray* _childrenOrder;
	NSString* _bulkParsedCTag;
	NSString* _bulkParsedPTag;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (assign,nonatomic) BOOL isBookmarkFolder; 
@property (assign,nonatomic) BOOL isBookmarkBarFolder; 
@property (assign,nonatomic) BOOL isBookmarkMenuFolder; 
@property (nonatomic,readonly) NSDictionary * appleAttributes;                    //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (nonatomic,retain) NSString * bulkParsedCTag;                           //@synthesize bulkParsedCTag=_bulkParsedCTag - In the implementation block
@property (nonatomic,retain) NSString * bulkParsedPTag;                           //@synthesize bulkParsedPTag=_bulkParsedPTag - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder;                           //@synthesize childrenOrder=_childrenOrder - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * bulkUploadErrorItem;              //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
+(id)copyPropertyMappingsForParser;
-(void)dealloc;
-(NSDictionary *)appleAttributes;
-(CoreDAVErrorItem *)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg1 ;
-(id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3 ;
-(void)setBulkParsedCTag:(NSString *)arg1 ;
-(void)setBulkParsedPTag:(NSString *)arg1 ;
-(void)_faultResourceType;
-(id)_appleAttributesString;
-(BOOL)isBookmarkFolder;
-(BOOL)isBookmarkBarFolder;
-(BOOL)isBookmarkMenuFolder;
-(void)setIsBookmarkFolder:(BOOL)arg1 ;
-(void)setIsBookmarkBarFolder:(BOOL)arg1 ;
-(void)setIsBookmarkMenuFolder:(BOOL)arg1 ;
-(NSString *)bulkParsedCTag;
-(NSString *)bulkParsedPTag;
-(NSString *)syncKey;
-(void)applyParsedProperties:(id)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(NSData *)dataPayload;
-(NSArray *)childrenOrder;
-(id)copyMkcolTask;
-(id)copyPropPatchTask;
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
@end
