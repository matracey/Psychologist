//
//  HappinessViewController.h
//  Happiness
//
//  Created by Martin Tracey on 22/12/2012.
//  Copyright (c) 2012 Martin Tracey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SplitViewBarButtonItemPresenter.h"

@interface HappinessViewController : UIViewController <SplitViewBarButtonItemPresenter>

@property (nonatomic) int happiness; // 0 is sad; 100 is very happy

- (void)setHappiness:(int)happiness;

@end
