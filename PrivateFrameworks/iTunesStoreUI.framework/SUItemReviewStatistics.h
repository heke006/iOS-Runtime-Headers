/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {
    float _averageUserRating;
    long long _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    long long _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property float averageUserRating;
@property long long numberOfUserRatings;
@property(copy) NSString * numberOfUserRatingsString;
@property long long numberOfUserReviews;
@property(copy) NSString * numberOfUserReviewsString;

- (float)averageUserRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfUserRatings;
- (id)numberOfUserRatingsString;
- (long long)numberOfUserReviews;
- (id)numberOfUserReviewsString;
- (void)setAverageUserRating:(float)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setNumberOfUserRatingsString:(id)arg1;
- (void)setNumberOfUserReviews:(long long)arg1;
- (void)setNumberOfUserReviewsString:(id)arg1;

@end
