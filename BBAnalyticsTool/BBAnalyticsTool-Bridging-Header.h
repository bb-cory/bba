//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#import <BuddyBuildSDK/BuddyBuildSDK.h>
#import "NewRelicAgent/NewRelic.h"


@interface UIViewController (flakey)

- (void)xxx_viewDidLayoutSubviews;
- (void)xxx_viewWillDisappear:(BOOL)animated;

@end

