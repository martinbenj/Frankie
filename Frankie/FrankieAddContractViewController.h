//
//  FrankieAddContractViewController.h
//  Frankie
//
//  Created by Benjamin Martin on 1/20/14.
//  Copyright (c) 2014 Benjamin Martin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

#import "FrankieStepsViewController.h"
#import "FrankieClientInformationViewController.h"
#import "FrankieLocationViewController.h"
#import "FrankieNotesViewController.h"

@interface FrankieAddContractViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>


@property (strong, nonatomic) IBOutlet UIScrollView *keyboardScrollView;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) UIDatePicker *pickerView;
@property (strong, nonatomic) IBOutlet UITextField *projectDate;
@property (strong, nonatomic) UIGestureRecognizer *touch;
@property (strong, nonatomic) IBOutlet UITextField *projectTitle;
@property (strong, nonatomic) IBOutlet UITextField *firstStep;
@property (strong, nonatomic) IBOutlet UIButton *uploadButton;
@property (strong, nonatomic) IBOutlet UITextField *price;
@property (strong, nonatomic) UIImagePickerController *mediaPicker;

// Determines whether to show warning before cancelling project upload
@property (assign, nonatomic) BOOL projectHasBeenEdited;

@property (strong, nonatomic) FrankieStepsViewController *svc;
@property (strong, nonatomic) FrankieClientInformationViewController *civc;
@property (strong, nonatomic) FrankieLocationViewController *lvc;
@property (strong, nonatomic) FrankieNotesViewController *nvc;

@property (strong, nonatomic) NSDictionary *clientInformation;
@property (strong, nonatomic) SVPlacemark *locationPlacemark;
@property (assign, nonatomic) int stepCount;
@property (strong, nonatomic) NSArray *steps;
@property (strong, nonatomic) NSString *notes;

- (IBAction)createNewContract:(id)sender;

@end
