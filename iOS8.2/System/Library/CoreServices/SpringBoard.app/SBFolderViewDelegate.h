/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBFolderViewDelegate <NSObject>
@optional
-(void)folderViewDidReceiveCancelReachabilityAction:(id)arg1;

@required
-(void)folderView:(id)arg1 currentPageIndexDidChange:(int)arg2;
-(Class)iconListViewClassForFolderView:(id)arg1;
-(void)folderViewWillBeginScrolling:(id)arg1;
-(void)folderViewDidEndScrolling:(id)arg1;
-(void)folderViewShouldClose:(id)arg1;
-(void)folderViewShouldBeginEditing:(id)arg1;

@end

