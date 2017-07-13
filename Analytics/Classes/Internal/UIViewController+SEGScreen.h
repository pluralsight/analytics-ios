#import <Foundation/Foundation.h>
#if !TARGET_OS_OSX

#import <UIKit/UIKit.h>

@interface UIViewController (SEGScreen)

+ (void)seg_swizzleViewDidAppear;
+ (UIViewController *)seg_topViewController;

@end

#endif
