//
//  VideoVO.h
//  SmartLearner
//
//  Created by zhihao on 15/10/12.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VideoVO : NSObject
@property int videoId;
@property (nonatomic, strong) NSString *videoUrl;
@property (nonatomic, strong) NSString *videoTitle;

@end
