//
//  ZKCell.h
//  ZKDragCellTableViewDemo
//
//  Created by ZK on 16/3/2.
//  Copyright © 2016年 ZK. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZKModel;

@interface ZKCell : UITableViewCell

@property (nonatomic, strong) ZKModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
