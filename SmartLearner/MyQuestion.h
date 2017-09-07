//
//  MyQuestion.h
//  SmartLearner
//
//  Created by zhihao on 15/10/14.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MyQuestion : NSObject
//当前在习题中的第几道
@property int count;
@property (strong,nonatomic)NSString* textId;
@property (strong,nonatomic)NSString* textName;
@property(strong,nonatomic)NSMutableArray * exerciseArray;

+(MyQuestion *)shareInstance;
@end
