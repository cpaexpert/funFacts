//
//  ViewController.h
//  FunFacts
//
//  Created by {} on 3/11/15.
//  Copyright (c) 2015 Appalicious. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@end

