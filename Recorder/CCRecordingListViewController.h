//
//  CCViewController.h
//  Recorder
//
//  Created by Conrad Calmez on 3/23/13.
//  Copyright (c) 2013 Conrad Calmez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCRecording.h"

@interface CCRecordingListViewController : UITableViewController <UITableViewDataSource, UIAlertViewDelegate, CCRecordingDelegate>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *editModeToggle;

- (IBAction)previousEntryWithButton:(UIBarButtonItem *)sender;
- (IBAction)nextEntryWithButton:(UIBarButtonItem *)sender;

- (IBAction)playCurrentItemWithButton:(UIBarButtonItem *)sender;
- (IBAction)pausePlayingItemWithButton:(UIBarButtonItem *)sender;

@end
