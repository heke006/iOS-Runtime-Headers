/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class <SBKKeyValuePayloadPair>, NSString;

@interface SBKPullValueTransaction : SBKTransaction {
    <SBKKeyValuePayloadPair> *_clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    NSString *_requestedKey;
    NSString *_resultDomainVersion;
    <SBKKeyValuePayloadPair> *_resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    bool_success;
}

@property(readonly) <SBKKeyValuePayloadPair> * clientItemPayloadPair;
@property(readonly) NSString * clientItemVersionAnchor;
@property(copy,readonly) NSString * requestedKey;
@property(readonly) NSString * resultDomainVersion;
@property(readonly) <SBKKeyValuePayloadPair> * resultItemPayloadPair;
@property(readonly) NSString * resultItemVersionAnchor;
@property(readonly) bool success;

- (void).cxx_destruct;
- (id)clampsKey;
- (id)clientItemPayloadPair;
- (id)clientItemVersionAnchor;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (id)requestedKey;
- (id)resultDomainVersion;
- (id)resultItemPayloadPair;
- (id)resultItemVersionAnchor;
- (bool)success;

@end
