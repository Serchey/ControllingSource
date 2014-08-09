//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Serhiy Medvedyev on 8/9/14.
//  Copyright (c) 2014 MevaSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
