//
//  WMMasterViewController.h
//  WebMonitor
//
//  Created by Dave on 1/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WMDetailViewController;

#import <CoreData/CoreData.h>

@interface WMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) WMDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
