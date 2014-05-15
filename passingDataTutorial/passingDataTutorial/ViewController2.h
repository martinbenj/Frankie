//
//  ViewController2.h
//  passingDataTutorial
//
//  Created by Benjamin Martin on 1/9/14.
//  Copyright (c) 2014 Benjamin Martin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController2;

@protocol ViewController2Delegate <NSObject>

-(void) passItemBack:(ViewController2 *) controller didFinishWithItem:(NSString*)item;

@end

@interface ViewController2 : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField2;
@property (weak, nonatomic) IBOutlet UILabel *displayLabel2;
@property (strong, nonatomic) NSString *stringFromTextField1;

- (IBAction)appendAndPassToVC1:(id)sender;

@property (weak, nonatomic) id<ViewController2Delegate> delegate;

@end
