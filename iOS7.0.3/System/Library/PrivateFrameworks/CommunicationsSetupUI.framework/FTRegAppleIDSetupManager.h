/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSString;

@interface FTRegAppleIDSetupManager : NSObject {

	NSMutableDictionary* _setupOperations;
	/*^block*/ id _handler;
	NSArray* _candidateAliases;
	NSArray* _selectedAliases;
	NSString* _selectionSummaryText;

}

@property (nonatomic,@dynamic,readonly) BOOL shouldShowAliasSelectionUI; 
@property (nonatomic,copy) NSArray * candidateAliases;                                //@synthesize candidateAliases=_candidateAliases - In the implementation block
@property (nonatomic,copy) NSArray * selectedAliases;                                 //@synthesize selectedAliases=_selectedAliases - In the implementation block
@property (nonatomic,copy) NSString * selectionSummaryText;                           //@synthesize selectionSummaryText=_selectionSummaryText - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * setupOperations;                   //@synthesize setupOperations=_setupOperations - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
-(void)setSetupOperations:(id)arg1 ;
-(void)setCandidateAliases:(id)arg1 ;
-(void)setSelectedAliases:(id)arg1 ;
-(void)_notifySuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)setupOperations;
-(void)_updateCandidateAliases;
-(id)candidateAliases;
-(BOOL)showsPhoneNumberDisplayString;
-(BOOL)_shouldShowAliasSelectionUI;
-(id)phoneNumberDisplayString;
-(id)_appleID;
-(id)selectedAliases;
-(void)setSelectionSummaryText:(id)arg1 ;
-(void)_updateSelectionSummaryText;
-(void)_notifySuccess;
-(void)_notifyFailureWithError:(id)arg1 ;
-(id)_aliasesForDictionary:(id)arg1 ;
-(void)addSetupDictionary:(id)arg1 forService:(int)arg2 ;
-(BOOL)shouldShowAliasSelectionUI;
-(BOOL)aliasIsEnabled:(id)arg1 ;
-(BOOL)beginSetupWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)selectionSummaryText;
@end
