//
//  NetWorkingUtil.h
//  Krbb_Teacher
//
//  Created by zhihao on 13-12-12.
//  Copyright (c) 2013年 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>


@interface NetWorkingUtil : NSObject

+ (BOOL) isConnectionAvailable;

+(id)dialogTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate cancelButtonTitle:(NSString*)cancelButtonTitle;


@end
