/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HURemoteContextHostingView : UIView {
    UIView * _contentView;
    UIView * _destinationOutContainerView;
    UIView * _destinationOutView;
    UIView * _destinationOverView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UIView *destinationOutContainerView;
@property (nonatomic, readonly) UIView *destinationOutView;
@property (nonatomic, readonly) UIView *destinationOverView;
@property (nonatomic) unsigned int maskedCorners;

- (void).cxx_destruct;
- (float)_continuousCornerRadius;
- (float)_cornerRadius;
- (void)_setContinuousCornerRadius:(float)arg1;
- (void)_setCornerRadius:(float)arg1;
- (id)contentView;
- (id)destinationOutContainerView;
- (id)destinationOutView;
- (id)destinationOverView;
- (id)initWithContentView:(id)arg1;
- (unsigned int)maskedCorners;
- (void)setContentView:(id)arg1;
- (void)setMaskedCorners:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end