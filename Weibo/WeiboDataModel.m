//
//  WeiboDataModel.m
//  Weibo
//
//  Created by BluesJiang on 30/11/15.
//  Copyright © 2015年 BluesJiang. All rights reserved.
//

#import "WeiboDataModel.h"

@implementation WeiboDataModel



- (WeiboDataModel*)initWithName:(NSString*)UserName
{
    if(self = [super init])
    {
        _userName = UserName;
    }
    return self;
}


- (NSMutableArray*)attachedImage{
    if(!_attachedImage)
    {
        _attachedImage = [[NSMutableArray alloc] initWithCapacity:6];
    }
    
    return _attachedImage;
    
}


@end
