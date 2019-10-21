#import <Foundation/Foundation.h>
#import "TopMindDefaults.h"
#import "DeviceInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface TopMindSDK : NSObject

@property (nonatomic, strong) NSMutableDictionary *eventData;
@property (nonatomic, strong, readonly) NSString *apiKey;
@property (nonatomic, strong, readonly) NSString *clientId;
@property (nonatomic, strong, readonly) TopMindDefaults *defaults;
@property (nonatomic, strong, readonly) DeviceInfo *deviceInfo;

/**
 * Use it to send event to TopMind.
 * @param name - event's name: "Button pressed" e.g
 * @param eventData - NSDictionary with properties @{ @"myParam": @"myValue" } e.g
 */

- (void)logEvent:(NSString*) name withEventProperties:(NSDictionary*) eventData;

/**
 * Use it to persist user identifier
 * It will be passed through all events as userId value
 * @param userId - your user id
 */
- (void)setUserId:(NSString*) userId;

/**
 * It removes all persisted TopMind data (userId e.g)
 */
- (void)logout;

/**
 * Sends event that app has started
 */
- (void)applicationStarted;

/**
 * Returns the current install id
 */
- (NSString *)getInstallId;

/**
 * Returns the current sid_long
 */
- (NSString *)getSidLong;

/**
 * Returns true if the application was launched for the first time
 */
- (BOOL)isFirstRun;

@end

NS_ASSUME_NONNULL_END
