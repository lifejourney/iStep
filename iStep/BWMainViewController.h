//
//  BWMainViewController.h
//  iStep
//
//  Created by steven.zhuang on 10/16/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import "BWFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface BWMainViewController : UIViewController <BWFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
