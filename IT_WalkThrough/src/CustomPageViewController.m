//
//  CustomPageViewController.m
//  DemoWalkthrough
//
//  Created by Christopher Worley on 4/15/15.
//  Copyright (c) 2015 Christopher Worley. All rights reserved.
//

#import "CustomPageViewController.h"

@interface CustomPageViewController ()

@end

@implementation CustomPageViewController

- (BOOL)shouldAutorotate {
	
	return NO;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


- (void) setTitle:(NSString *)tit description:(NSString *)desc image:(UIImage *)img{
    if(tit != nil){
        self.titlepage.text = tit;
    }
    if(desc != nil){
        self.descriptionPage.text = desc;
    }
    if (img != nil){
        self.imagePage.image = img;
    }
}

- (void)walkthroughDidScroll:(CGFloat)position offset:(CGFloat)offset {
	CATransform3D tr = CATransform3DIdentity;
	tr.m34 = -1/500.0;
	self.titlepage.layer.transform = CATransform3DRotate(tr, (CGFloat)M_PI * (1.0 - offset), 1, 1, 1);
	self.descriptionPage.layer.transform = CATransform3DRotate(tr, (CGFloat)M_PI * (1.0 - offset), 1, 1, 1);
	
	CGFloat tmpOffset = offset;
	
    if (tmpOffset > 1.0){
		tmpOffset = 1.0 + (1.0 - tmpOffset);
	}
	self.imagePage.layer.transform = CATransform3DTranslate(tr, 0 , (1.0 - tmpOffset) * 200, 0);
}

@end
