/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@class GKGameRecord, GKPlayer;

@interface GKLeaderboardSetListDataSource : GKBasicCollectionViewDataSource {

	GKGameRecord* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKGameRecord * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                //@synthesize player=_player - In the implementation block
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)sectionTitle;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
