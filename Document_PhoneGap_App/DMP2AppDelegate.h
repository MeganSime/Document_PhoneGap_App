//
//  DMP2AppDelegate.h
//  Document_PhoneGap_App
//
//  Created by administrator on 11/02/2013.
//  Copyright (c) 2013 administrator. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DMP2AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
