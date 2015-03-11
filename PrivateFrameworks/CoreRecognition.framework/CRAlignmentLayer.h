/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class CALayer, CAShapeLayer, CATextLayer;

@interface CRAlignmentLayer : CALayer {
    CATextLayer *_cardNumberLayer;
    CATextLayer *_cardholderNameLayer;
    CATextLayer *_expirationDateLayer;
    CALayer *_infoLayer;
    CATextLayer *_instructionLayer;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_outlineLayer;
}

@property(retain) CATextLayer * cardNumberLayer;
@property(retain) CATextLayer * cardholderNameLayer;
@property(retain) CATextLayer * expirationDateLayer;
@property(retain) CALayer * infoLayer;
@property(retain) CATextLayer * instructionLayer;
@property(retain) CAShapeLayer * maskLayer;
@property(retain) CAShapeLayer * outlineLayer;

+ (id)layer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRect;
- (void)animateFoundCardRect:(id)arg1;
- (void)animateFoundCode:(id)arg1 cardHolder:(id)arg2 cardholderPosition:(struct CGPoint { float x1; float x2; })arg3 expDate:(id)arg4 expdatePosition:(struct CGPoint { float x1; float x2; })arg5 completionBlock:(id)arg6;
- (id)cardNumberLayer;
- (id)cardholderNameLayer;
- (id)expirationDateLayer;
- (void)fadePlacementImage;
- (id)infoLayer;
- (id)init;
- (id)instructionLayer;
- (void)layoutSublayers;
- (id)maskLayer;
- (id)outlineLayer;
- (void)setCardNumberLayer:(id)arg1;
- (void)setCardholderNameLayer:(id)arg1;
- (void)setExpirationDateLayer:(id)arg1;
- (void)setInfoLayer:(id)arg1;
- (void)setInstructionLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setOutlineLayer:(id)arg1;

@end