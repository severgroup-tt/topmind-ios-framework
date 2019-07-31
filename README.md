
# Topmind SDK

## Getting started

CocoaPods

Just add pod 

`pod 'TopMindSDK', :git => 'https://github.com/severgroup-tt/topmind-ios-framework', :branch => 'master'`

into your Podfile.

Then run `pod install`

## Usage

```
#import <topmind_sdk/topmind_sdk.h>

/**
* Use it to send event to TopMind.
* @param name event's name: "menu click" f.e
* @param eventData NSDictionary with data {myParam: "myValue"} f.e
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

```
