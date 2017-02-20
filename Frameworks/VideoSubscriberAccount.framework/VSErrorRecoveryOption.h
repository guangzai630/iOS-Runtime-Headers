/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSErrorRecoveryOption : NSObject {
    id /* block */  _attemptHandler;
    BOOL  _destructive;
    NSString * _localizedAlertButtonTitle;
}

@property (nonatomic, copy) id /* block */ attemptHandler;
@property (getter=isDestructive, nonatomic) BOOL destructive;
@property (nonatomic, copy) NSString *localizedAlertButtonTitle;

- (void).cxx_destruct;
- (id /* block */)attemptHandler;
- (BOOL)isDestructive;
- (id)localizedAlertButtonTitle;
- (void)setAttemptHandler:(id /* block */)arg1;
- (void)setDestructive:(BOOL)arg1;
- (void)setLocalizedAlertButtonTitle:(id)arg1;

@end