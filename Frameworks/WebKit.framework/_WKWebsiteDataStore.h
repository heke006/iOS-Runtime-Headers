/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface _WKWebsiteDataStore : NSObject <WKObject> {
    struct ObjectStorage<API::Session> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    } _session;
}

@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=isNonPersistent,readonly) bool nonPersistent;
@property(readonly) Class superclass;

+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id).cxx_construct;
- (void)dealloc;
- (bool)isNonPersistent;

@end
