/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <CoreFoundation/NSCopying.h>

@class SSDownloadPolicy, NSData, NSNumber;

@interface DownloadPolicy : SSMemoryEntity <NSCopying> {

	SSDownloadPolicy* _cachedPolicy;

}

@property (nonatomic,copy) NSData * policyData; 
@property (nonatomic,copy) NSNumber * activeDownloadSizeLimit; 
@property (nonatomic,readonly) SSDownloadPolicy * downloadPolicy; 
+(id)defaultProperties;
+(Class)databaseEntityClass;
-(id)_newBackgroundTaskAgentJobWithRule:(id)arg1 ;
-(id)policyData;
-(id)activeDownloadSizeLimit;
-(id)copyBackgroundTaskAgentJobs;
-(void)setActiveDownloadSizeLimit:(id)arg1 ;
-(void)setPolicyData:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)downloadPolicy;
@end
