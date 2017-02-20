/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRDeviceInfo : NSObject <NSMutableCopying> {
    NSString * _applicationBundleIdentifier;
    NSString * _applicationBundleVersion;
    NSString * _localizedModelName;
    NSString * _name;
    BOOL  _pairingAllowed;
    unsigned int  _protocolVersion;
    NSString * _systemBuildVersion;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *applicationBundleVersion;
@property (nonatomic, readonly) NSString *localizedModelName;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPairingAllowed, nonatomic, readonly) BOOL pairingAllowed;
@property (nonatomic, readonly) unsigned int protocolVersion;
@property (nonatomic, readonly) NSString *systemBuildVersion;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_persistentDeviceID;
+ (BOOL)_persistentDeviceIDFromFile:(id)arg1 deviceID:(id*)arg2;
+ (id)currentDeviceInfo;
+ (double)processorTimeScale;

- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)applicationBundleIdentifier;
- (id)applicationBundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isPairingAllowed;
- (id)localizedModelName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (unsigned int)protocolVersion;
- (id)systemBuildVersion;
- (id)uniqueIdentifier;

@end