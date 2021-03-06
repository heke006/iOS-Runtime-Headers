/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerReference : NSObject <NSCopying> {
    unsigned long long mIndex;
    int mType;
}

@property(readonly) Class genericPropertyMapClass;
@property(readonly) unsigned long long index;
@property(readonly) Class nonstyleClass;
@property(readonly) Class styleClass;
@property(readonly) int type;

+ (id)styleOwnerReferenceWithType:(int)arg1 index:(unsigned long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (Class)genericPropertyMapClass;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (Class)nonstyleClass;
- (Class)styleClass;
- (int)type;

@end
