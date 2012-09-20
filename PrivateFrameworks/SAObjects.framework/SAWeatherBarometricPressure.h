/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAWeatherBarometricPressure : AceObject <SAAceSerializable> {
}

@property(copy) NSString * trend;
@property(copy) NSString * value;

+ (id)barometricPressureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)barometricPressure;

- (id)groupIdentifier;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setTrend:(id)arg1;
- (id)trend;
- (id)encodedClassName;

@end