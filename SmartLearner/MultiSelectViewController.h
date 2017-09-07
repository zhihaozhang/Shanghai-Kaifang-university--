//
//  MultiSelectViewController.h
//  Course
//
//  Created by zhihao on 15/10/8.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MultiSelectCell.h"
#import "Exercise.h"
#import "MyQuestion.h"
#import "Tools.h"
#import "SingleSelectViewController.h"
@interface MultiSelectViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UINavigationBar *navigationBar;
- (IBAction)clickBack:(id)sender;
@property (strong, nonatomic) IBOutlet UITableView *tableView;
//@property(strong,nonatomic)NSMutableArray * textArray;
@property (nonatomic, strong) NSMutableArray *mark;
//@property (nonatomic, strong) NSMutableArray *selected;
@property (nonatomic, strong) NSString *selected;
@property (strong, nonatomic)Exercise * exercise;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *answerLabel;
@property(strong,nonatomic)Tools* dialog;
- (IBAction)clickNext:(id)sender;
- (IBAction)submit:(id)sender;
@end
