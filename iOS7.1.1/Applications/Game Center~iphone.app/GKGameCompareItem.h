/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKGameRecordInternal;

@interface GKGameCompareItem : NSObject {

	GKGameRecordInternal* _localRecord;
	GKGameRecordInternal* _playerRecord;

}

@property (retain) GKGameRecordInternal * localRecord;               //@synthesize localRecord=_localRecord - In the implementation block
@property (retain) GKGameRecordInternal * playerRecord;              //@synthesize playerRecord=_playerRecord - In the implementation block
+(id)itemWithLocal:(id)arg1 other:(id)arg2 ;
-(void)setPlayerRecord:(id)arg1 ;
-(id)playerRecord;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setLocalRecord:(id)arg1 ;
-(id)localRecord;
@end
