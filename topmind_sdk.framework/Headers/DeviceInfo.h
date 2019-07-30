#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfo : NSObject

-(NSString *)getCarrier;
-(NSString *)getAdvertisingIdentifier;
-(NSString *)getDeviceId;
-(NSString *)getVersionName;
-(NSString *)getVersionCode;
-(NSString *)getBuildType;
-(BOOL)isWifi;
-(NSString *)getTimestamp;
-(NSString *)getLanguage;
-(NSString *)getTimezone;
-(NSString *)getScreenHeight;
-(NSString *)getScreenWidth;
-(NSString *)getOsVersion;
-(NSString *)getSdkVersion;
-(NSString *)getDeviceModel;

@end

NS_ASSUME_NONNULL_END
