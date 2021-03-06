/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    NSString *_GUID;
    NSNumber *_backCameraCaptureTime;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    NSString *_callStatisticsGUID;
    NSDictionary *_callerProperties;
    id _conferenceController;
    NSString *_conferenceID;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSMutableDictionary *_conferenceStateCache;
    double _connectionTimeoutTime;
    NSTimer *_connectionTimeoutTimer;
    int _connectionType;
    NSNumber *_dataDownloaded;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSDate *_dateConnected;
    NSDate *_dateCreated;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_dateStartedConnecting;
    NSError *_error;
    NSMutableDictionary *_extraServerContext;
    NSTimer *_firstFrameTimeoutTimer;
    NSNumber *_frontCameraCaptureTime;
    IMHandle *_initiator;
    NSDate *_interruptionBegan;
    double _invitationTimeoutTime;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    } _landscapeAspectRatios;
    unsigned int _lastPostedState;
    unsigned long long _localNetworkConnectionType;
    IMAVChatParticipant *_localParticipant;
    unsigned int _localState;
    NSNumber *_natType;
    long long _networkCheckResult;
    NSMutableArray *_participants;
    IMPair *_pendingPreemptiveRelayInitate;
    long long _pingTestResult;
    NSDictionary *_pingTestResults;
    } _portraitAspectRatios;
    NSData *_relayRemotePrimaryIdentifier;
    unsigned long long _remoteNetworkConnectionType;
    unsigned int _sessionID;
    IMTimingCollection *_timingCollection;
    bool_airplaneModeEnabled;
    bool_connectionStarted;
    bool_didRemoteMute;
    bool_didRemotePause;
    bool_hasGatheredInfo;
    bool_hasPendingAccept;
    bool_hasPendingInit;
    bool_hasReceivedFirstFrame;
    bool_isAudioInterrupted;
    bool_isCallUpgrade;
    bool_isCaller;
    bool_isProxied;
    bool_isTerminating;
    bool_isVideo;
    bool_isVideoInterrupted;
    bool_metadataFinalized;
    bool_needsAudioRestart;
    bool_needsVideoRestart;
    bool_startedAudioSession;
    bool_wantsHoldMusic;
}

@property(retain) NSString * GUID;
@property(readonly) bool _allParticipantsUsingICE;
@property(setter=_setBackCameraCaptureTime:,retain) NSNumber * _backCameraCaptureTime;
@property(readonly) long long _bustedCallID;
@property(readonly) NSNumber * _callDuration;
@property(setter=_setCallStatisticsGUID:,retain) NSString * _callStatisticsGUID;
@property(setter=_setConferenceController:) id _conferenceController;
@property(readonly) NSObject<OS_dispatch_queue> * _conferenceQueue;
@property(readonly) NSNumber * _connectDuration;
@property(setter=_setConnectionStarted:) bool _connectionStarted;
@property(setter=_setConnectionType:) int _connectionType;
@property(readonly) NSNumber * _currentNatType;
@property(retain,readonly) NSDictionary * _extraServerContext;
@property(setter=_setFrontCameraCaptureTime:,retain) NSNumber * _frontCameraCaptureTime;
@property(retain,readonly) NSArray * _imHandles;
@property(setter=_setInterruptionBegan:,retain) NSDate * _interruptionBegan;
@property(setter=_setIsAudioInterrupted:) bool _isAudioInterrupted;
@property(setter=_setIsCallUpgrade:) bool _isCallUpgrade;
@property(readonly) bool _isProxy;
@property(setter=_setIsVideoInterrupted:) bool _isVideoInterrupted;
@property(setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType;
@property(setter=_setNatType:,retain) NSNumber * _natType;
@property(setter=_setNeedsAudioRestart:) bool _needsAudioRestart;
@property(setter=_setNeedsVideoRestart:) bool _needsVideoRestart;
@property(setter=_setNetworkCheckResult:) long long _networkCheckResult;
@property(setter=_setPingTestResult:) long long _pingTestResult;
@property(setter=_setPingTestResults:,retain) NSDictionary * _pingTestResults;
@property(readonly) NSNumber * _relayConnectDuration;
@property(setter=_setRelayRemotePrimaryIdentifier:,retain) NSData * _relayRemotePrimaryIdentifier;
@property(readonly) NSNumber * _remoteNatType;
@property(setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType;
@property(setter=_setStartedAudioSession:) bool _startedAudioSession;
@property(readonly) bool _usesRelay;
@property(retain,readonly) IMAccount * account;
@property(setter=_setCallerProperties:,retain) NSDictionary * callerProperties;
@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property(retain) NSString * conferenceID;
@property double connectionTimeoutTime;
@property(setter=setDataDownloaded:,retain) NSNumber * dataDownloaded;
@property(setter=setDataRate:,retain) NSNumber * dataRate;
@property(setter=setDataUploaded:,retain) NSNumber * dataUploaded;
@property(retain,readonly) NSDate * dateConnected;
@property(retain,readonly) NSDate * dateCreated;
@property(retain,readonly) NSDate * dateEnded;
@property(readonly) bool didRemoteMute;
@property(readonly) bool didRemotePause;
@property(readonly) int endedError;
@property(readonly) unsigned int endedReason;
@property(readonly) bool hasReceivedFirstFrame;
@property(retain,readonly) IMHandle * initiatorIMHandle;
@property(retain,readonly) IMAVChatParticipant * initiatorParticipant;
@property double invitationTimeoutTime;
@property(readonly) bool isActive;
@property(readonly) bool isCaller;
@property(setter=setMute:) bool isMute;
@property(setter=setPaused:) bool isPaused;
@property(readonly) bool isProxied;
@property(setter=setRemoteMute:) bool isRemoteMute;
@property bool isSendingAudio;
@property bool isSendingVideo;
@property(readonly) bool isStateFinal;
@property(readonly) bool isUsingWifi;
@property(readonly) bool isVideo;
@property(retain,readonly) IMAVChatParticipant * localParticipant;
@property void* localVideoBackLayer;
@property void* localVideoLayer;
@property(retain,readonly) IMHandle * otherIMHandle;
@property(retain,readonly) NSArray * participants;
@property(retain,readonly) NSArray * remoteParticipants;
@property(readonly) unsigned int sessionID;
@property(readonly) unsigned int state;
@property(setter=_setWantsHoldMusic:) bool wantsHoldMusic;

+ (id)_acceptedChats;
+ (id)_activeChat;
+ (id)_avChatArray;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(bool)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatList;
+ (id)_chatListLock;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_connectedChat;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
+ (id)_incomingInvitations;
+ (id)_nonFinalChat;
+ (id)_outgoingInvitations;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)acceptedChats;
+ (id)activeChat;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatList;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)connectedChat;
+ (id)connectedChats;
+ (id)connectingChats;
+ (double)defaultConnectionTimeoutTime;
+ (double)defaultInvitationTimeoutTime;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)outgoingInvitations;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(bool)arg2;

- (id)GUID;
- (void)__responseToVCInvite:(id)arg1;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_airplaneModeChanged:(id)arg1;
- (bool)_allParticipantsUsingICE;
- (void)_applicationWillTerminate:(id)arg1;
- (id)_backCameraCaptureTime;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_breakCallsIfNecessary:(bool)arg1;
- (long long)_bustedCallID;
- (void)_cacheBool:(bool)arg1 forKey:(id)arg2;
- (bool)_cachedBoolForKey:(id)arg1;
- (id)_callDuration;
- (id)_callStatisticsGUID;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_clearBreakBeforeMakeTimer;
- (void)_clearCache;
- (void)_clearConnectionTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (id)_conferenceController;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(bool)arg2;
- (id)_conferenceQueue;
- (id)_connectDuration;
- (bool)_connectionStarted;
- (void)_connectionTimeout:(id)arg1;
- (int)_connectionType;
- (id)_currentNatType;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (id)_extraServerContext;
- (void)_firstFrameTimeout:(id)arg1;
- (id)_frontCameraCaptureTime;
- (void)_handleAVError:(id)arg1;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(bool)arg4;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (bool)_hasCachedBoolForKey:(id)arg1;
- (id)_imHandles;
- (id)_initOutgoingTo:(id)arg1 isVideo:(bool)arg2 GUID:(id)arg3;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(bool)arg5 extraProperties:(id)arg6;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_interruptionBegan;
- (void)_invitationTimeout:(id)arg1;
- (bool)_isAudioInterrupted;
- (bool)_isCallUpgrade;
- (bool)_isCallUpgradeTo:(id)arg1;
- (bool)_isProxy;
- (bool)_isVideoInterrupted;
- (bool)_isVideoUpgradeTo:(id)arg1;
- (unsigned long long)_localNetworkConnectionType;
- (bool)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (id)_natType;
- (bool)_needsAudioRestart;
- (bool)_needsVideoRestart;
- (long long)_networkCheckResult;
- (void)_noteFirstFrame;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (bool)_participantsCheckOut;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (long long)_pingTestResult;
- (id)_pingTestResults;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(bool)arg2 orientationChanged:(bool)arg3 aspectChanged:(bool)arg4 cameraWillSwitch:(bool)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize { double x1; double x2; })arg8;
- (void)_postStateToDelegateIfNecessary;
- (bool)_processVCResponseDict:(id)arg1;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_reduceInvitationTimeoutTime;
- (id)_relayConnectDuration;
- (id)_relayRemotePrimaryIdentifier;
- (id)_remoteNatType;
- (unsigned long long)_remoteNetworkConnectionType;
- (void)_responseToVCInvite:(id)arg1;
- (void)_resumeAudioState;
- (void)_resumeVideoState;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_setActiveConference;
- (void)_setBackCameraCaptureTime:(id)arg1;
- (void)_setBreakBeforeMakeTimer;
- (void)_setCallStatisticsGUID:(id)arg1;
- (void)_setCallerProperties:(id)arg1;
- (void)_setConferenceController:(id)arg1;
- (void)_setConferenceID:(id)arg1;
- (void)_setConnectionStarted:(bool)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_setConnectionType:(int)arg1;
- (void)_setCreationDate;
- (void)_setDateConnected;
- (void)_setFirstFrameTimeoutTimer;
- (void)_setFrontCameraCaptureTime:(id)arg1;
- (void)_setGUID:(id)arg1;
- (void)_setInterruptionBegan:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_setIsAudioInterrupted:(bool)arg1;
- (void)_setIsCallUpgrade:(bool)arg1;
- (void)_setIsVideoInterrupted:(bool)arg1;
- (void)_setLocalNetworkConnectionType:(unsigned long long)arg1;
- (void)_setNatType:(id)arg1;
- (void)_setNeedsAudioRestart:(bool)arg1;
- (void)_setNeedsVideoRestart:(bool)arg1;
- (void)_setNetworkCheckResult:(long long)arg1;
- (void)_setPingTestResult:(long long)arg1;
- (void)_setPingTestResults:(id)arg1;
- (void)_setRelayRemotePrimaryIdentifier:(id)arg1;
- (void)_setRemoteNetworkConnectionType:(unsigned long long)arg1;
- (void)_setStartedAudioSession:(bool)arg1;
- (void)_setStateDisconnected;
- (void)_setWantsHoldMusic:(bool)arg1;
- (bool)_startedAudioSession;
- (void)_submitCallConnectedLogging;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(bool)arg2 isVideo:(bool)arg3;
- (id)_timings;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (bool)_usesRelay;
- (void)_vccInitDidFinish:(id)arg1;
- (void)acceptInvitation;
- (void)acceptInvitationWithHoldMusic;
- (id)account;
- (void)beginChat;
- (id)callerProperties;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)cancelInvitation;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(bool)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (id)conferenceID;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(bool)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (double)connectionTimeoutTime;
- (id)dataDownloaded;
- (id)dataRate;
- (id)dataUploaded;
- (id)dateConnected;
- (id)dateCreated;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (id)description;
- (bool)didRemoteMute;
- (bool)didRemotePause;
- (void)endChat;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1;
- (int)endedError;
- (unsigned int)endedReason;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (bool)hasReceivedFirstFrame;
- (id)initIncomingFrom:(id)arg1 isVideo:(bool)arg2 callerProperties:(id)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(bool)arg2;
- (id)initiatorIMHandle;
- (id)initiatorParticipant;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1;
- (void)inviteAll;
- (id)inviteesInfo;
- (bool)isActive;
- (bool)isCaller;
- (bool)isConferenceSilent;
- (bool)isMute;
- (bool)isPaused;
- (bool)isProxied;
- (bool)isRemoteMute;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isStateFinal;
- (bool)isUsingWifi;
- (bool)isVideo;
- (struct CGSize { double x1; double x2; })localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (id)localParticipant;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (id)otherIMHandle;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (id)remoteParticipants;
- (void)resetWantsHoldMusic;
- (unsigned int)sessionID;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setDataDownloaded:(id)arg1;
- (void)setDataRate:(id)arg1;
- (void)setDataUploaded:(id)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setLocalAspectRatio:(struct CGSize { double x1; double x2; })arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMetadataFinalized;
- (void)setMute:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRemoteMute:(bool)arg1;
- (bool)startPreviewWithError:(id*)arg1;
- (unsigned int)state;
- (bool)stopPreview;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemDidFastUserSwitchOut;
- (void)systemWillShutdown;
- (void)toggleMute;
- (void)togglePaused;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (bool)wantsHoldMusic;

@end
