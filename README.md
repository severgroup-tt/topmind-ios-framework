
# Topmind

## Getting started

CocoaPods

Just add pod 
`pod 'TopMindSDK', :git => 'https://github.com/severgroup-tt/topmind-ios-framework', :branch => 'master'`
into your Podfile.

Then run

`pod install`

## Usage

```
#import <topmind_sdk/topmind_sdk.h>

TopMind *topmind = [[TopMind alloc] init];

//...

[topmind logEvent:@"My iOS event name" withEventProperties:@{@"mykey": @"my_event_value"}];

//...

[topmind setUserId:@"some_user_id_to_persist"];

//...

[topmind logout];

//...

[topmind applicationStarted];

```
