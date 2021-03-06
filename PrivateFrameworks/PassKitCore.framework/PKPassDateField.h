/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDateField : PKPassField {
    long long _dateStyle;
    long long _timeStyle;
    bool_ignoresTimeZone;
    bool_isRelative;
}

@property long long dateStyle;
@property bool ignoresTimeZone;
@property bool isRelative;
@property long long timeStyle;

+ (bool)supportsSecureCoding;

- (long long)dateStyle;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresTimeZone;
- (id)initWithCoder:(id)arg1;
- (bool)isRelative;
- (void)setDateStyle:(long long)arg1;
- (void)setIgnoresTimeZone:(bool)arg1;
- (void)setIsRelative:(bool)arg1;
- (void)setTimeStyle:(long long)arg1;
- (long long)timeStyle;
- (id)value;

@end
