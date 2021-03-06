/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewController.h>
#import <MusicUI/MusicPickerOverlayDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UIAlertView, NSCache;

@interface MusicPlaylistsViewController : MusicTableViewController <MusicPickerOverlayDelegate, UITextFieldDelegate> {

	UITextField* _newPlaylistAlertTextField;
	id _newPlaylistAlertTextFieldChangeObserver;
	UIAlertView* _newPlaylistAlertView;
	NSCache* _playlistMetadataCache;
	int _addPlaylistActionIndex;
	int _geniusPlaylistActionIndex;

}

@property (nonatomic,retain) NSCache * playlistMetadataCache;              //@synthesize playlistMetadataCache=_playlistMetadataCache - In the implementation block
@property (nonatomic,readonly) int addPlaylistActionIndex;                 //@synthesize addPlaylistActionIndex=_addPlaylistActionIndex - In the implementation block
@property (nonatomic,readonly) int geniusPlaylistActionIndex;              //@synthesize geniusPlaylistActionIndex=_geniusPlaylistActionIndex - In the implementation block
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(id)_playlistTitle;
-(void)pickerOverlayRequestsFinish:(id)arg1 ;
-(void)pickerOverlayDidFinish:(id)arg1 ;
-(BOOL)music_hasContent;
-(BOOL)MPH_supportsCoverFlow;
-(void)_updateActionCellIndexes;
-(void)setPlaylistMetadataCache:(id)arg1 ;
-(void)_updateCloudPlaylist:(id)arg1 ;
-(void)_addPlaylistAction;
-(void)_geniusPlaylistAction;
-(void)_updateSaveButtonEnabledState;
-(BOOL)_isSaveButtonEnabled;
-(void)switchToShortcutIdentifier:(id)arg1 ;
-(id)playlistMetadataCache;
-(int)addPlaylistActionIndex;
-(int)geniusPlaylistActionIndex;
-(void).cxx_destruct;
@end

