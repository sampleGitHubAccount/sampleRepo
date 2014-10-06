//
//  DetailViewController.h
//  SampleXCodeProject
//
//  Created by Test User on 10/6/14.
//  Copyright (c) 2014 Test User. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

