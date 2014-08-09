//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Serhiy Medvedyev on 8/9/14.
//  Copyright (c) 2014 MevaSoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
