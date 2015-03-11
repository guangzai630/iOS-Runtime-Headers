/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCameraViewfinderLocal, FigCameraViewfinderStream, FigCaptureSessionProxy, FigStateMachine, NSObject<OS_dispatch_queue>, NSString;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate> {
    FigCaptureSessionProxy *_captureSessionProxy;
    BOOL _ended;
    long long _identifier;
    FigCameraViewfinderStream *_previewStream;
    BOOL _previewStreamClosed;
    long _previewStreamClosedErrorStatus;
    NSObject<OS_dispatch_queue> *_previewStreamQueue;
    FigStateMachine *_stateMachine;
    FigCameraViewfinderLocal *_viewfinder;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_captureSessionDidCapturePhotoWithStatus:(long)arg1 thumbnailData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_captureSessionDidStop;
- (void)_closePreviewStream;
- (id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3;
- (void)_setupStateMachine;
- (void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(long)arg2;
- (void)cameraViewfinderStreamDidOpen:(id)arg1;
- (void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureSessionPreviewTapDidClose:(id)arg1;
- (void)captureSessionPreviewTapDidOpen:(id)arg1;
- (void)closePreviewStream;
- (void)dealloc;
- (long long)identifier;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (id)viewfinder;

@end