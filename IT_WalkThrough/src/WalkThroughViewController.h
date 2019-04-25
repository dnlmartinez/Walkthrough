//
//  IT_Walkthrough.h
//  IT_Walkthrough
//
//  Created by MacSivsa on 16/04/2019.
//  Copyright © 2019 PSA. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WalkthroughViewControllerDelegate <NSObject>
  @required
    - (void)walkthroughCloseButtonPressed;
    - (void)walkthroughNextButtonPressed;
    - (void)walkthroughPrevButtonPressed;
    - (void)walkthroughPageDidChange:(NSInteger)pageNumber;
@end


@protocol WalkthroughPage <NSObject>
    - (void)walkthroughDidScroll:(CGFloat)position offset:(CGFloat)offset;
@end




@interface WalkThroughViewController : UIViewController <UIScrollViewDelegate, WalkthroughPage>

    @property (nonatomic, assign) id <WalkthroughViewControllerDelegate> delegate;

    @property (strong, nonatomic) NSMutableArray *controllers;
    @property (strong, nonatomic) UIScrollView *scrollview;
    @property (weak, nonatomic) IBOutlet UIPageControl *pageController;

    @property (weak, nonatomic) IBOutlet UIButton *closeButton;
    @property (weak, nonatomic) IBOutlet UIButton *nextButton;
    @property (weak, nonatomic) IBOutlet UIButton *prevButton;

    @property (weak, nonatomic) IBOutlet UILabel *titlepage;
    @property (weak, nonatomic) IBOutlet UILabel *descriptionPage;
    @property (weak, nonatomic) IBOutlet UIImageView *imagePage;
    @property (weak, nonatomic) IBOutlet UIImageView *iconPage;

    - (void)reInitValues;

    - (void)setCloseButtonTitle:(NSString *)title;

    - (void)addViewController:(UIViewController *)vc;

@end
