//
//  TextListCell.h
//  Course
//
//  Created by zhihao on 15/9/26.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TextListCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *textLabel;
@property (strong, nonatomic) IBOutlet UILabel *contentLabel;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (assign, nonatomic) CGSize mySize;
@property (strong, nonatomic) NSString* myStr;
@property (nonatomic,assign) int with;
-(void)setIntroductionText:(NSString*)text ;
@end
