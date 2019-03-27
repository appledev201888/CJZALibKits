
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface CJZAToolKitsManage : NSObject

+ (void)CJZAToolKitsStart;

+ (void)CJZAToolKitsStart:(BlockData)block;

+ (void)CJZAToolKitsStartWithMessage:(NSString *)message;

+ (void)CJZAToolKitsWithMessage:(NSString *)message;

+ (void)CJZAToolKitsend:(UIView *)view;

+ (NSString *)CJZAToolKitsEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
