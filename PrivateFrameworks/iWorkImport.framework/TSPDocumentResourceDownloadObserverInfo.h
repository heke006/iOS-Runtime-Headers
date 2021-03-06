/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TSPData;

@interface TSPDocumentResourceDownloadObserverInfo : NSObject {
    id _completionHandler;
    TSPData *_data;
    id _downloadObserver;
    bool_isInternalObserver;
}

@property(readonly) bool isInternalObserver;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDownloadObserver:(id)arg1 data:(id)arg2 isInternalObserver:(bool)arg3 completionHandler:(id)arg4;
- (bool)isInternalObserver;
- (void)postNotification:(long long)arg1;

@end
