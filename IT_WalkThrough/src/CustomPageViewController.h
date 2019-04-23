//
//  CustomPageViewController.h
//  DemoWalkthrough
//
//  Created by Christopher Worley on 4/15/15.
//  Copyright (c) 2015 Christopher Worley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WalkThroughViewController.h"

@interface CustomPageViewController : UIViewController < WalkthroughPage >

@property (nonatomic, strong) IBOutlet UIImageView *imagePage;
@property (nonatomic, strong) IBOutlet UILabel *titlepage;
@property (nonatomic, strong) IBOutlet UILabel *descriptionPage;

- (void) setTitle:(NSString *)tit description:(NSString *)desc image:(UIImage *)img;

@end
