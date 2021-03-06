/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDMMCS, CKSQLitePool, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CKDAssetCache : NSObject {
    CKDMMCS *_MMCS;
    NSString *_applicationBundleID;
    NSString *_dbPath;
    CKSQLitePool *_dbPool;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSString *_fileDownloadPath;
    int _fileDownloadPathFd;
    NSString *_packageDownloadPath;
    NSString *_packageUploadPath;
    NSObject<OS_dispatch_queue> *_queue;
    bool_isEvictionScheduled;
    bool_isUnitTestingAccount;
}

@property CKDMMCS * MMCS;
@property(retain) NSString * applicationBundleID;
@property(retain) NSString * dbPath;
@property(readonly) CKSQLitePool * dbPool;
@property(retain) NSObject<OS_dispatch_source> * expiryTimer;
@property(retain) NSString * fileDownloadPath;
@property int fileDownloadPathFd;
@property bool isEvictionScheduled;
@property bool isUnitTestingAccount;
@property(retain) NSString * packageDownloadPath;
@property(retain) NSString * packageUploadPath;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)_sharedCachesByBundleID;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5;
+ (int)openFdForDownloadPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)MMCS;
- (id)_addAssetHandleForFileURL:(id)arg1 signature:(id)arg2 itemID:(id)arg3 error:(id*)arg4;
- (void)_evictDownloadedFilesForced:(bool)arg1;
- (void)_evictDownloadedFilesWithDatabase:(id)arg1 forced:(bool)arg2;
- (void)_evictFilesForced:(bool)arg1;
- (void)_evictPackagesForced:(bool)arg1;
- (void)_expireAssetHandles;
- (void)_scheduleEvictionForDownloadedFiles;
- (void)_scheduleExpirationForAssetHandles;
- (void)_unregisterItemIDs:(id)arg1;
- (id)addAssetHandleForData:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (id)addAssetHandleForDownloadedFileURL:(id)arg1 itemID:(unsigned long long)arg2 signature:(id)arg3 error:(id*)arg4;
- (id)applicationBundleID;
- (void)cancelExpiryTimer;
- (void)clearForced:(bool)arg1;
- (id)dbPath;
- (id)dbPool;
- (void)dealloc;
- (void)evictAllFilesForced:(bool)arg1;
- (void)expireAssetHandlesIfNecessary;
- (id)expiryTimer;
- (id)fileDownloadPath;
- (int)fileDownloadPathFd;
- (id)initWithApplicationBundleID:(id)arg1 dbPath:(id)arg2 fileDownloadPath:(id)arg3 packageDownloadPath:(id)arg4 packageUploadPath:(id)arg5;
- (bool)isEvictionScheduled;
- (bool)isUnitTestingAccount;
- (int)openFileDescriptorForItemID:(unsigned long long)arg1 itemType:(id*)arg2 error:(id*)arg3;
- (id)packageDownloadPath;
- (id)packageUploadPath;
- (id)queue;
- (void)setApplicationBundleID:(id)arg1;
- (void)setDbPath:(id)arg1;
- (void)setExpiryTimer:(id)arg1;
- (void)setFileDownloadPath:(id)arg1;
- (void)setFileDownloadPathFd:(int)arg1;
- (void)setIsEvictionScheduled:(bool)arg1;
- (void)setIsUnitTestingAccount:(bool)arg1;
- (void)setMMCS:(id)arg1;
- (void)setPackageDownloadPath:(id)arg1;
- (void)setPackageUploadPath:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)startTrackingAssetHandles:(id)arg1 error:(id*)arg2;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;

@end
