//
//  GuideViewController.h
//  MembershipCard
//
//  Created by 孙鹏 on 16/2/21.
//  Copyright © 2016年 tom.sun. All rights reserved.
//

#import "BaseViewController.h"

@interface GuideViewController : BaseViewController
@property (copy, nonatomic) void (^EnterMainVC)();
@end