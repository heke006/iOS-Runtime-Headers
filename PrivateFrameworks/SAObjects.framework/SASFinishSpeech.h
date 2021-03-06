/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * endpoint;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * orderedContext;
@property long long packetCount;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)finishSpeech;
+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endpoint;
- (id)groupIdentifier;
- (id)orderedContext;
- (long long)packetCount;
- (void)setEndpoint:(id)arg1;
- (void)setOrderedContext:(id)arg1;
- (void)setPacketCount:(long long)arg1;

@end
