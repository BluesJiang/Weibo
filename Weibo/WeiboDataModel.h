//
//  WeiboDataModel.h
//  Weibo
//
//  Created by BluesJiang on 30/11/15.
//  Copyright © 2015年 BluesJiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface WeiboDataModel : NSObject

@property (nonatomic,strong) UIImage* avatar;
@property (nonatomic,strong) NSString* mainText;
@property (nonatomic,strong) NSString* userName;
@property (nonatomic,strong) NSMutableArray* attachedImage;
@property  BOOL isVIP;
@property (nonatomic) NSDate* timeStamp;
@property (nonatomic) BOOL hasRetransmission;
@property (nonatomic,weak) WeiboDataModel* transmission;



@end
