//
//  ListTableViewCell.h
//  DemoAC
//
//  Created by Zack Zhu on 8/13/15.
//  Copyright (c) 2015 Zack Zhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListTableViewCell : UITableViewCell

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *bodyLabel;

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic) BOOL usedForMessage;

@end
