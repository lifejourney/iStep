//
//  BWFlipsideViewController.m
//  iStep
//
//  Created by steven.zhuang on 10/18/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import "BWFlipsideViewController.h"

@interface BWFlipsideViewController ()

@end

@implementation BWFlipsideViewController

- (void)awakeFromNib
{
    self.preferredContentSize = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

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

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
