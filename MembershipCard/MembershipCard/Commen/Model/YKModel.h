//
//  YKModel.h
//  MembershipCard
//
//  Created by 孙鹏 on 16/2/28.
//  Copyright © 2016年 tom.sun. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 我的会员卡模型 */
@interface MyCardModel : NSObject
@property(nonatomic,strong) NSString *merchant_id; //商户ID
@property(nonatomic,strong) NSString *name;//商户名称
@property(nonatomic,strong) NSString *logoURL;

@end

/** 会员卡信息模型 */
@interface CardInfoModel : NSObject
@property(nonatomic,strong) NSString *merchant_id;//商户ID
@property(nonatomic,strong) NSString *name;//商户名称
@property(nonatomic,strong) NSString *merchant_bn;//商户编号
@property(nonatomic,strong) NSString *area;//商户地区
@property(nonatomic,strong) NSString *addr;//商户地址
@property(nonatomic,strong) NSString *tel;//商户电话
@property(nonatomic,strong) NSString *business_hous;//营业时间
@property(nonatomic,strong) NSString *addon;//～暂时没有～
@property(nonatomic,strong) NSString *remark;//备注
@property(nonatomic,strong) NSString *card_bn;//卡号
@property(nonatomic,strong) NSString *logoURL;
@end

/** 会员卡子卡信息模型 */
@interface CardListModel : NSObject
@property(nonatomic,strong) NSString *card_id;//卡ID
@property(nonatomic,strong) NSString *name;//卡名称
@property(nonatomic,strong) NSString *price;//累计金额
@property(nonatomic,strong) NSString *store;//累计次数
@property(nonatomic,strong) NSString *count_type;//计算类型（1次数,2金额）
@end

/** 卡消费明细模型 */
@interface UsedDetailModel : NSObject
@property(nonatomic,strong) NSString *card_id;//卡ID
@property(nonatomic,strong) NSString *title;//标题
@property(nonatomic,strong) NSString *create_time;//消费时间
@property(nonatomic,strong) NSString *number;//本次消费额度
@property(nonatomic,strong) NSString *price;//累计金额
@property(nonatomic,strong) NSString *store;//累计次数
@property(nonatomic,strong) NSString *count_type;//计算类型（1次数,2金额）

@end

/** 通知模型（系统通知仅有文本标题，没有image和url）*/
@interface NoticeModel : NSObject
@property(nonatomic,strong) NSString *notice_id;//通知ID
@property(nonatomic,strong) NSString *name;//标题
@property(nonatomic,strong) NSString *merchant_id;//参与商户的id（0为系统通知）
@property(nonatomic,strong) NSString *end_time;//截止时间
@property(nonatomic,strong) NSString *image;
@property(nonatomic,strong) NSString *url;
@end

/** 商户公告模型 */
@interface AnnouncementModel : NSObject
@property(nonatomic,strong) NSString *merchant_id;
@property(nonatomic,strong) NSString *title;
@property(nonatomic,strong) NSString *content;
@property(nonatomic) NSInteger *create_time;
@property(nonatomic,strong) NSString *announcement_id;//公告id
@end