//
//  MainViewController.h
//  AdCalc
//
//  Created by Michael Jones on 15/10/2013.
//  Copyright (c) 2013 Michael Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

#define METRIC 0

@interface MainViewController : UIViewController <UIPopoverControllerDelegate, UIPickerViewDataSource>
{
    NSInteger metricRow;
}


@property (nonatomic, strong) NSArray *metricArray;

@property (strong, nonatomic) IBOutlet UILabel *metricLabel;
@property (strong, nonatomic) IBOutlet UILabel *revenueLabel;
@property (strong, nonatomic) IBOutlet UILabel *imprClickLabel;


@property (strong, nonatomic) IBOutlet UITextField *metricTextField;
@property (strong, nonatomic) IBOutlet UITextField *revenueTextField;
@property (strong, nonatomic) IBOutlet UITextField *imprClickTextField;


@property (strong, nonatomic) IBOutlet UIPickerView *metricPicker;

- (void)removeKeyboard;

- (IBAction)calculateButton:(id)sender;


@end
