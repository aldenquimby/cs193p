//
//  CardDisplayViewController.h
//  CardViewer
//
//  Created by Alden Quimby on 7/24/13.
//  Copyright (c) 2013 CS193p. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CardDisplayViewController : UIViewController

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;

@end
