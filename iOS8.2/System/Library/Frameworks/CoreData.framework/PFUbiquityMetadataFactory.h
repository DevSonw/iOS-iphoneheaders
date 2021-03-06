/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock, NSManagedObjectModel;

@interface PFUbiquityMetadataFactory : NSObject {

	NSMutableDictionary* _rootLocationToPeerIDToEntry;
	NSRecursiveLock* _rootLocationToPeerIDToEntryLock;
	NSManagedObjectModel* _cachedModel;

}
+(id)sharedFactory;
+(void)initialize;
-(id)newMetadataManagedObjectModel;
-(id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(char)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)createMetadataModel;
-(id)newEntityForName:(id)arg1 ;
-(id)newAttributeNamed:(id)arg1 attributeType:(unsigned)arg2 isOptional:(char)arg3 isTransient:(char)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7 ;
-(id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(char)arg4 isToMany:(char)arg5 andDeleteRule:(unsigned)arg6 ;
-(void)addModelingToolUserInfoToEntity:(id)arg1 ;
-(void)addModelingToolUserInfoToProperty:(id)arg1 ;
-(void)removeAllCoordinatorsForRootLocation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

