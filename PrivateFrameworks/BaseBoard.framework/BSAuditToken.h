/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding> {
    struct { 
        unsigned int val[8]; 
    } _auditToken;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) struct { unsigned int x1[8]; } realToken;
@property(readonly) Class superclass;

+ (id)tokenFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tokenFromMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;

- (id)_dataWithValue:(id)arg1;
- (id)_valueFromData:(id)arg1 ofType:(const char *)arg2;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (struct { unsigned int x1[8]; })realToken;

@end
