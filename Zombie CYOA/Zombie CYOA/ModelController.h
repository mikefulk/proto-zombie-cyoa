//
//  ModelController.h
//  Zombie CYOA
//
//  Created by Mike Fulk on 2/14/13.
//  Copyright (c) 2013 Biscuit Tea. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
