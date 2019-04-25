//
//  BWWalkthroughPageViewController.h
//  DemoWalkthrough
//
//  Created by Christopher Worley on 4/15/15.
//  Copyright (c) 2015 Christopher Worley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalkThroughViewController.h"

@interface WalkthroughPageViewController : WalkThroughViewController

- (void) setTitle:(NSString *)tit description:(NSString *)desc image:(UIImage *)img icon:(UIImage *)icon;

@end
