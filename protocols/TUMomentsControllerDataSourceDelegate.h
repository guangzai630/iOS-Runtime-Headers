/* Generated by RuntimeBrowser.
 */

@protocol TUMomentsControllerDataSourceDelegate <NSObject>

@required

- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg2;
- (void)dataSource:(id <TUMomentsControllerDataSource>)arg1 didUpdateCapabilities:(TUMomentsCapabilities *)arg2 forVideoStreamToken:(long long)arg3;
- (void)serverDiedForDataSource:(id <TUMomentsControllerDataSource>)arg1;
- (void)willCaptureRemoteRequestForDataSource:(id <TUMomentsControllerDataSource>)arg1;

@end
