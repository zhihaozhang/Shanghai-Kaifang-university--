//
//  Tools.h
//  Course
//
//  Created by zhihao on 15/9/26.
//  Copyright (c) 2015年 zhihao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OMGToast.h"
#import "MBProgressHUD.h"
@interface Tools : NSObject
@property(strong,nonatomic)MBProgressHUD *progressHUD;
-(void)showToast:(UIViewController*)viewControl withMessage:(NSString*)message;
-(void)createProgressHUD:(UIViewController*)viewControl withMessage:(NSString*)message;
-(void)hideProgressHUD:(UIViewController*)viewControl;
-(BOOL) isEmpty:(NSString *) str;
@end
