//
//  ModelController.h
//  Test
//
//  Created by Jakes Bejoy on 10/23/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>
- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;
@end
