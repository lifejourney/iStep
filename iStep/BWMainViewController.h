//
//  BWMainViewController.h
//  iStep
//
//  Created by steven.zhuang on 10/18/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import "BWFlipsideViewController.h"

@interface BWMainViewController : UIViewController <BWFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
