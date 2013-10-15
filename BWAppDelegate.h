//
//  BWAppDelegate.h
//  iStep
//
//  Created by steven.zhuang on 10/15/13.
//  Copyright (c) 2013 steven.zhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BWMainViewController;

@interface BWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) BWMainViewController *mainViewController;

@end
