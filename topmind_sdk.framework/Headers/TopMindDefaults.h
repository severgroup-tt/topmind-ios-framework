#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TopMindDefaults : NSObject

@property (nonatomic, strong, readonly) NSUserDefaults *preferences;

- (NSString *)getStringDefault:(NSString *)forKey;

- (void)setStringDefault:(NSString *)forKey withString:(NSString *) string;

- (BOOL)isFirstRun;

- (void)clear;

@end

NS_ASSUME_NONNULL_END
