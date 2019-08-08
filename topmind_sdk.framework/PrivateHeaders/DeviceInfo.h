#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DeviceInfo : NSObject

-(NSString *)getCarrier;
-(NSString *)getAdvertisingIdentifier;
-(NSString *)getIdentifierForVendor;
-(NSString *)getVersionName;
-(NSString *)getVersionCode;
-(NSString *)getBuildType;
-(NSString *)getTimestamp;
-(NSString *)getLanguage;
-(NSString *)getTimezone;
-(NSString *)getScreenHeight;
-(NSString *)getScreenWidth;
-(NSString *)getOsVersion;
-(NSString *)getDeviceModel;
-(BOOL)isWifi;

@end

NS_ASSUME_NONNULL_END
