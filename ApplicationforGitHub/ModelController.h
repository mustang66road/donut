//
//  ModelController.h
//  ApplicationforGitHub
//
//  Created by mathieu diawara on 27/06/14.
//  Copyright (c) 2014 mathieu diawara. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
