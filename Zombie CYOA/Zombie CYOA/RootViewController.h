//
//  RootViewController.h
//  Zombie CYOA
//
//  Created by Mike Fulk on 2/14/13.
//  Copyright (c) 2013 Biscuit Tea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UIPageViewControllerDelegate>

@property (strong, nonatomic) UIPageViewController *pageViewController;

@end
