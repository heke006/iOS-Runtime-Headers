/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder>, NSArray, NSURL;

@interface AVCaptureFileOutputDelegateWrapper_FigRecorder : NSObject {
    NSArray *_connections;
    <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> *_delegate;
    int _didStopRecordingError;
    NSArray *_metadata;
    NSURL *_outputFileURL;
    bool_receivedDidStartRecording;
    bool_receivedDidStopRecording;
}

@property(readonly) NSArray * connections;
@property(readonly) <AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> * delegate;
@property int didStopRecordingError;
@property(retain) NSArray * metadata;
@property(readonly) NSURL * outputFileURL;
@property bool receivedDidStartRecording;
@property bool receivedDidStopRecording;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;

- (id)connections;
- (void)dealloc;
- (id)delegate;
- (int)didStopRecordingError;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (id)metadata;
- (id)outputFileURL;
- (bool)receivedDidStartRecording;
- (bool)receivedDidStopRecording;
- (void)setDidStopRecordingError:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReceivedDidStartRecording:(bool)arg1;
- (void)setReceivedDidStopRecording:(bool)arg1;

@end
