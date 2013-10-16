//
//  BWMainViewController.m
//  iStep
//
//  Created by steven.zhuang on 10/16/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import "BWMainViewController.h"

@interface BWMainViewController ()

@end

@implementation BWMainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Flipside View Controller

- (void)flipsideViewControllerDidFinish:(BWFlipsideViewController *)controller
{
    [self.flipsidePopoverController dismissPopoverAnimated:YES];
}

- (IBAction)showInfo:(id)sender
{
    if (!self.flipsidePopoverController) {
        BWFlipsideViewController *controller = [[BWFlipsideViewController alloc] initWithNibName:@"BWFlipsideViewController" bundle:nil];
        controller.delegate = self;
        
        self.flipsidePopoverController = [[UIPopoverController alloc] initWithContentViewController:controller];
    }
    if ([self.flipsidePopoverController isPopoverVisible]) {
        [self.flipsidePopoverController dismissPopoverAnimated:YES];
    } else {
        [self.flipsidePopoverController presentPopoverFromBarButtonItem:sender permittedArrowDirections:UIPopoverArrowDirectionAny animated:YES];
    }
}

@end
