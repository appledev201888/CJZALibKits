
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface CJZAKitsLibManage : NSObject

+ (void)CJZAKitsLibStart;

+ (void)CJZAKitsLibStart:(BlockData)block;

+ (void)CJZAKitsLibStartWithMessage:(NSString *)message;

+ (void)CJZAKitsLibWithMessage:(NSString *)message;

+ (void)CJZAKitsLibend:(UIView *)view;

+ (void)CJZAKitsLibLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)CJZAKitsLibEncode:(NSString *)message;

+ (void)CJZAKitsLibLoadThird:(NSString *)message;

+ (void)CJZAKitsLibLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

+ (BOOL)CJZAKitsLibLoadWithMessage:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
