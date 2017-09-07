//
//  URLParamter.h
//  krbb_teacher
//
//  Created by zhihao on 12/13/13.
//  Copyright (c) 2013 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface URLParamter : NSObject
@property(nonatomic,copy)NSString* key;//URL参数的关键字
@property(nonatomic,copy)NSString* value;//URL参数的值
-(id)initWithKey:(NSString*)key value:(NSString*)value;//初始化url参数
@end
