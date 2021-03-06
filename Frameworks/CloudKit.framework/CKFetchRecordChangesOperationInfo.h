/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordZoneID, CKServerChangeToken, NSArray;

@interface CKFetchRecordChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_desiredKeys;
    CKServerChangeToken *_previousServerChangeToken;
    CKRecordZoneID *_recordZoneID;
    unsigned long long _resultsLimit;
    bool_shouldFetchAssetContents;
}

@property(retain) NSArray * desiredKeys;
@property(retain) CKServerChangeToken * previousServerChangeToken;
@property(retain) CKRecordZoneID * recordZoneID;
@property unsigned long long resultsLimit;
@property bool shouldFetchAssetContents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (id)recordZoneID;
- (unsigned long long)resultsLimit;
- (void)setDesiredKeys:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
