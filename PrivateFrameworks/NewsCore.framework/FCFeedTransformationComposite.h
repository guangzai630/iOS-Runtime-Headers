/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming> {
    NSArray * _feedTransformations;
    BOOL  _shouldLogTransformationResults;
    NSMutableArray * _transformationLogs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *feedTransformations;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL shouldLogTransformationResults;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *transformationLogs;

- (void).cxx_destruct;
- (id)feedTransformations;
- (id)init;
- (id)initWithFeedTransformations:(id)arg1;
- (id)initWithFeedTransformations:(id)arg1 logTransformationResults:(BOOL)arg2;
- (void)setFeedTransformations:(id)arg1;
- (BOOL)shouldLogTransformationResults;
- (id)transformFeedItems:(id)arg1;
- (id)transformationLogs;

@end