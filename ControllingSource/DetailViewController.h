//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Wgleyberton Alencar on 28/07/14.
//  Copyright (c) 2014 ___App01___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
