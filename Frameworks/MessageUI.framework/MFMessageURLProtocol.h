/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMessageTextAttachment, MFMonitoredInvocation, NSMutableArray, NSThread, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol {
    MFMessageTextAttachment *_attachment;
    NSMutableArray *_attachments;
    MFMonitoredInvocation *_invocation;
    NSThread *_loader;
    NSURL *_url;
    bool_stopped;
}

+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end
