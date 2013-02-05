/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, PFUbiquityGlobalObjectIDCache, NSRecursiveLock, NSMutableArray, PFUbiquityLocation, NSString, PFUbiquityKnowledgeVector, NSMutableDictionary;

@interface PFUbiquityTransactionHistoryCache : NSObject {
    PFUbiquityKnowledgeVector *_cacheKV;
    NSMutableArray *_entriesToWrite;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    NSMutableDictionary *_globalIDToHistoryArray;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToHistoryArray;
    NSRecursiveLock *_peerIDToHistoryArrayLock;
    PFUbiquityLocation *_rootLocation;
}

@property(readonly) PFUbiquityKnowledgeVector * cacheKV;
@property(readonly) NSArray * cachedGlobalIDs;
@property(retain) PFUbiquityGlobalObjectIDCache * globalIDCache;

- (BOOL)addTransactionEntriesFromExporter:(id)arg1 error:(id*)arg2;
- (BOOL)addTransactionEntry:(id)arg1 error:(id*)arg2;
- (BOOL)addTransactionEntryLight:(id)arg1 needsWrite:(BOOL)arg2 error:(id*)arg3;
- (BOOL)addTransactionEntryLights:(id)arg1 error:(id*)arg2;
- (id)cacheKV;
- (BOOL)cacheTransactionHistory:(id*)arg1;
- (id)cachedGlobalIDs;
- (id)cachedTransactionHistoryForGlobalID:(id)arg1;
- (void)dealloc;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (id)description;
- (id)globalIDCache;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (BOOL)purgeCacheAndWritePendingEntries:(BOOL)arg1 error:(id*)arg2;
- (void)setGlobalIDCache:(id)arg1;
- (BOOL)writePendingEntries:(id*)arg1;

@end