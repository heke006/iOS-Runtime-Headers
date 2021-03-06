/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKShareID, CKSharedItemID, NSObject<CKCommenting>, NSString;

@interface CKCommentQuery : NSObject <NSSecureCoding, NSCopying> {
    NSString *_context;
    CKSharedItemID *_creatorID;
    NSObject<CKCommenting> *_owner;
    long long _resultsOrdering;
    CKShareID *_shareID;
}

@property(retain) NSString * context;
@property(retain) CKSharedItemID * creatorID;
@property(retain) NSObject<CKCommenting> * owner;
@property long long resultsOrdering;
@property(retain) CKShareID * shareID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creatorID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareID:(id)arg1;
- (id)owner;
- (long long)resultsOrdering;
- (void)setContext:(id)arg1;
- (void)setCreatorID:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setResultsOrdering:(long long)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;

@end
