//
//  ViewController.h
//  SmartLearner
//
//  Created by zhihao on 15-9-24.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tools.h"
#import "SharePreferenceUtil.h"
@interface LoginViewController : UIViewController

- (IBAction)clickLoginBtn:(id)sender;
- (IBAction)clickRegist:(id)sender;
- (IBAction)clickCannotLogin:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *tv_number;
@property (weak, nonatomic) IBOutlet UITextField *tv_psw;
@property(nonatomic,retain)Tools* process;
@property(nonatomic,retain)SharePreferenceUtil* util;

@end

