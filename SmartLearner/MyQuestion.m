//
//  MyQuestion.m
//  SmartLearner
//
//  Created by zhihao on 15/10/14.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import "MyQuestion.h"

@implementation MyQuestion
static MyQuestion * shareData = nil;
+(MyQuestion *)shareInstance{
    if (!shareData) {
        shareData = [[MyQuestion alloc]init];
        
    }
    return shareData;
}
@end
