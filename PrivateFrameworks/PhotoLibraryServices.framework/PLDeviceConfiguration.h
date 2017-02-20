/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDeviceConfiguration : NSObject {
    BOOL  _isPad;
    BOOL  _isRetina;
    BOOL  _isRidingCrudSnow;
    BOOL  _isRidingPowderSnow;
    BOOL  _isTV;
    BOOL  _isWatch;
    struct CGSize { 
        float width; 
        float height; 
    }  _logicalScreenSize;
    float  _screenScale;
}

@property (nonatomic) BOOL isPad;
@property (nonatomic) BOOL isRetina;
@property (nonatomic, readonly) BOOL isRidingCrudSnow;
@property (nonatomic, readonly) BOOL isRidingPowderSnow;
@property (nonatomic) BOOL isTV;
@property (nonatomic) BOOL isWatch;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } logicalScreenSize;
@property (nonatomic, readonly) float screenScale;
@property (nonatomic, readonly) BOOL shouldUseNanoThumbnailFormats;

+ (id)defaultDeviceConfiguration;

- (id)description;
- (id)initWithLogicalScreenSize:(struct CGSize { float x1; float x2; })arg1 screenScale:(float)arg2 deviceClass:(void*)arg3 isRidingCrudSnow:(BOOL)arg4 isRidingPowderSnow:(BOOL)arg5;
- (BOOL)isPad;
- (BOOL)isRetina;
- (BOOL)isRidingCrudSnow;
- (BOOL)isRidingPowderSnow;
- (BOOL)isTV;
- (BOOL)isWatch;
- (struct CGSize { float x1; float x2; })logicalScreenSize;
- (float)screenScale;
- (void)setIsPad:(BOOL)arg1;
- (void)setIsRetina:(BOOL)arg1;
- (void)setIsTV:(BOOL)arg1;
- (void)setIsWatch:(BOOL)arg1;
- (BOOL)shouldUseNanoThumbnailFormats;

@end