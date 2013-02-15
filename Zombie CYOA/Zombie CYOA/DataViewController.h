//
//  DataViewController.h
//  Zombie CYOA
//
//  Created by Mike Fulk on 2/14/13.
//  Copyright (c) 2013 Biscuit Tea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
