/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage, NSURL;


@protocol IMMediaChapter <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * customTitle; 
@property (nonatomic,readonly) NSString * bookTitle; 
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,readonly) SCD_Struct_AE44 mediaTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AE44 assetTimeRange; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int metadataType; 
@property (nonatomic,readonly) char hasAlternateArtwork; 
@required
-(NSString *)bookTitle;
-(SCD_Struct_AE44)assetTimeRange;
-(SCD_Struct_AE44)mediaTimeRange;
-(char)hasAlternateArtwork;
-(id)artworkCatalogForTime:(double)arg1;
-(int)metadataType;
-(NSURL *)externalURL;
-(int)type;
-(NSString *)title;
-(UIImage *)artwork;
-(NSString *)customTitle;
-(NSURL *)assetURL;

@end
