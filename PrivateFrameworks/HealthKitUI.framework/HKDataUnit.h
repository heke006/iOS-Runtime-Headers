/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKSampleType, HKUnit, NSString;

@interface HKDataUnit : NSObject <NSCopying> {
    HKSampleType *_dataType;
    NSString *_displayName;
    long long _keyboardType;
    double _scalarValue;
    NSString *_singularDisplayName;
    HKUnit *_unit;
    bool_isCharacteristic;
    bool_listeningForLocaleChanges;
}

@property(readonly) HKSampleType * dataType;
@property(readonly) NSString * displayName;
@property long long keyboardType;
@property(readonly) double scalarValue;
@property(readonly) NSString * singularDisplayName;
@property(readonly) HKUnit * unit;

- (void).cxx_destruct;
- (id)_dataTypeForIdentifier:(id)arg1 aggregationType:(id)arg2;
- (id)_displayNameForUnit:(id)arg1 localizablePrefix:(id)arg2;
- (id)_initAsCopyOf:(id)arg1;
- (id)_lengthUnitForCurrentLocaleWithLongLength:(bool)arg1;
- (id)_massUnitForCurrentLocale;
- (id)_temperatureUnitForCurrentLocale;
- (id)_unitForCurrentLocale;
- (id)_unitForString:(id)arg1;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (bool)isCharacteristic;
- (bool)isEqual:(id)arg1;
- (bool)isNikeFuel;
- (bool)isSleep;
- (long long)keyboardType;
- (void)localeDidChange:(id)arg1;
- (double)scalarValue;
- (void)setKeyboardType:(long long)arg1;
- (id)singularDisplayName;
- (id)unit;

@end
