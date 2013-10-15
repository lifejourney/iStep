//
//  BWFlipsideViewController.h
//  iStep
//
//  Created by steven.zhuang on 10/15/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BWFlipsideViewController;

@protocol BWFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(BWFlipsideViewController *)controller;
@end

@interface BWFlipsideViewController : UIViewController

@property (weak, nonatomic) id <BWFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
