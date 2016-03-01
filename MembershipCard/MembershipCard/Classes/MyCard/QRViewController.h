//
//  QRViewController.h
//  MembershipCard
//
//  Created by 孙鹏 on 16/2/22.
//  Copyright © 2016年 tom.sun. All rights reserved.
//

#import "BaseViewController.h"

@interface QRViewController : BaseViewController

@property (weak, nonatomic) IBOutlet UIView *scanRectView;
@property (weak, nonatomic) IBOutlet UILabel *topLabel;
@property (weak, nonatomic) IBOutlet UIButton *changeInputWayBtn;

- (IBAction)changeInputWayAction:(id)sender;
@end