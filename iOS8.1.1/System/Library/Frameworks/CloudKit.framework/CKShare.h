/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKShareID, CKSharedItemID, NSData, NSString, NSMutableArray, NSMapTable, NSMutableSet, NSArray;

@interface CKShare : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isKnownToServer;
	CKShareID* _shareID;
	CKSharedItemID* _sharedItemID;
	NSData* _protectionData;
	NSString* _protectionVersion;
	NSMutableArray* _existingParticipants;
	NSMapTable* _addedParticipantsToOutgoingInvitationsTable;
	NSMutableArray* _removedParticipants;
	NSMutableSet* _pendingServerParticipants;

}

@property (nonatomic,copy) CKShareID * shareID;                                                     //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,copy) CKSharedItemID * sharedItemID;                                           //@synthesize sharedItemID=_sharedItemID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allParticipants; 
@property (nonatomic,retain) NSData * protectionData;                                               //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * protectionVersion;                                          //@synthesize protectionVersion=_protectionVersion - In the implementation block
@property (assign,nonatomic) BOOL isKnownToServer;                                                  //@synthesize isKnownToServer=_isKnownToServer - In the implementation block
@property (nonatomic,retain) NSMutableArray * existingParticipants;                                 //@synthesize existingParticipants=_existingParticipants - In the implementation block
@property (nonatomic,retain) NSMapTable * addedParticipantsToOutgoingInvitationsTable;              //@synthesize addedParticipantsToOutgoingInvitationsTable=_addedParticipantsToOutgoingInvitationsTable - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedParticipants;                                  //@synthesize removedParticipants=_removedParticipants - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingServerParticipants;                              //@synthesize pendingServerParticipants=_pendingServerParticipants - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)_mergeServerParticipants:(id)arg1 ;
-(void)_updateFromPendingServerParticipants;
-(id)_initWithSharedItemID:(id)arg1 shareID:(id)arg2 error:(id*)arg3 ;
-(id)initWithItem:(id)arg1 shareName:(id)arg2 ;
-(id)initWithItem:(id)arg1 shareName:(id)arg2 error:(id*)arg3 ;
-(void)setRemovedParticipants:(NSMutableArray *)arg1 ;
-(void)setAddedParticipantsToOutgoingInvitationsTable:(NSMapTable *)arg1 ;
-(NSArray *)allParticipants;
-(id)_knownParticipantEqualToParticipant:(id)arg1 ;
-(id)_matchingParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2 ;
-(void)_addParticipant:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3 ;
-(id)_addParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2 invitationMessage:(id)arg3 invitationImageURL:(id)arg4 ;
-(NSMutableSet *)pendingServerParticipants;
-(void)setPendingServerParticipants:(NSMutableSet *)arg1 ;
-(id)initWithItem:(id)arg1 error:(id*)arg2 ;
-(void)setItemPermission:(long long)arg1 forParticipant:(id)arg2 ;
-(long long)itemPermissionForParticipant:(id)arg1 ;
-(void)setParticipantListPermission:(long long)arg1 forParticipant:(id)arg2 ;
-(long long)participantListPermissionForParticipant:(id)arg1 ;
-(long long)acceptanceStatusForParticipant:(id)arg1 ;
-(id)addParticipantWithUserRecordID:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3 ;
-(id)addParticipantWithEmailAddress:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3 ;
-(void)removeParticipant:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isKnownToServer;
-(id)CKPropertiesDescription;
-(void)setProtectionData:(NSData *)arg1 ;
-(NSData *)protectionData;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSMapTable *)addedParticipantsToOutgoingInvitationsTable;
-(NSMutableArray *)existingParticipants;
-(NSMutableArray *)removedParticipants;
-(void)setIsKnownToServer:(BOOL)arg1 ;
-(id)_initBare;
-(void)setExistingParticipants:(NSMutableArray *)arg1 ;
-(void)setSharedItemID:(CKSharedItemID *)arg1 ;
-(CKSharedItemID *)sharedItemID;
-(void)setProtectionVersion:(NSString *)arg1 ;
-(NSString *)protectionVersion;
@end
