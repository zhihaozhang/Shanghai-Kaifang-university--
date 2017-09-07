//
//  Exercise.h
//  SmartLearner
//
//  Created by zhihao on 15/10/12.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Exercise : NSObject
@property(strong,nonatomic)NSString* questinId;
@property(strong,nonatomic)NSString* exerciseTitle;
@property(strong,nonatomic)NSString* exerciseType;
@property(strong,nonatomic)NSString* exerciseAnswer;
@property(strong,nonatomic)NSMutableArray* exerciseOption;
@property(strong,nonatomic)NSMutableArray* exerciseTrue;
@property(strong,nonatomic)NSString* textId;
@property(strong,nonatomic)NSString* myAnswer;
@end
