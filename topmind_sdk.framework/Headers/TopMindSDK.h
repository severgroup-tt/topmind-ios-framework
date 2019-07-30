#import <Foundation/Foundation.h>
#import "TopMindDefs.h"
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface TopMindSDK : NSObject

@property (nonatomic, strong) NSMutableDictionary *eventData;
@property (nonatomic, strong, readonly) NSString *apiKey;
@property (nonatomic, strong, readonly) NSString *clientId;
@property (nonatomic, strong, readonly) TopMindDefs *defaults;
@property (nonatomic, strong, readonly) DeviceInfo *deviceInfo;

/**
 * Use it to send event to TopMind.
 * @param name event's name: "menu click" f.e
 * @param eventData Map with data {myParam: "myValue"} f.e
 */

- (void)logEvent:(NSString*) name withEventProperties:(NSDictionary*) eventData;

/**
 * Use it to persist user identifier
 * It will be passed through all events as userId value
 * @param userId your user id
 */
- (void)setUserId:(NSString*) userId;

/**
 * It removes all persisted TopMind data (userId f.e)
 */
- (void)logout;

/**
 * Sends event that app has started
 */
- (void)applicationStarted;

@end

NS_ASSUME_NONNULL_END
