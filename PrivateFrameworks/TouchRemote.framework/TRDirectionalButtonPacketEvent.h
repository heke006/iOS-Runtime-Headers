/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDirectionalButtonPacketEvent : TRPacketEvent {
    long long _buttonType;
    long long _gestureState;
    long long _gestureType;
}

@property(readonly) long long buttonType;
@property(readonly) long long gestureState;
@property(readonly) long long gestureType;

+ (unsigned int)_packetEventType;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (long long)buttonType;
- (id)description;
- (long long)gestureState;
- (long long)gestureType;
- (id)initWithButtonType:(long long)arg1 gestureType:(long long)arg2 gestureState:(long long)arg3;

@end
