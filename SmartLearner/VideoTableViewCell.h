//
//  VideoTableViewCell.h
//  SmartLearner
//
//  Created by zhihao on 15-9-26.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIWebView *cellWeb;
@property (weak, nonatomic) IBOutlet UILabel *cellLabel;

@end
