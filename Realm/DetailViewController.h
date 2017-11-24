//
//  DetailViewController.h
//  Realm
//
//  Created by Larry Luk on 2017-11-24.
//  Copyright © 2017 Larry Luk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

