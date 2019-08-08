
# Topmind SDK

[![Pod version](https://badge.fury.io/co/TopMindSDK.svg)](https://badge.fury.io/co/TopMindSDK)

## Installation

CocoaPods

Just add pod  `pod 'TopMindSDK'` into your Podfile.

Then run `pod install`

add
```
<key>TopMindClientId</key>
<string>your_client_id</string>
<key>TopMindApiKey</key>
<string>your_api_key</string>
```

to info.plist

## Usage

``` objective-c

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
* Returns the current install Id
*/
- (NSString *)getInstallId;

/**
* Returns true if the application was launched for the first time
*/
- (BOOL)isFirstRun;


```
