//
//  MTPieLabel.h
//  iOS-Echarts_iOS
//
//  Created by 范正君 on 2018/7/13.
//  Copyright © 2018年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MTPielabelNormal : NSObject

@property (nonatomic, strong) NSNumber *borderWidth;
/* 上、左、下、右边距*/
@property (nonatomic, strong) NSArray<NSNumber *> *padding;

PYInitializerTemplate(MTPielabelNormal, normal);
PYPropertyEqualTemplate(MTPielabelNormal, NSNumber *, borderWidth);
PYPropertyEqualTemplate(MTPielabelNormal, NSArray<NSNumber *> *, padding);

@end

@interface MTPieLabel : NSObject

@property (nonatomic, strong) MTPielabelNormal *normal;

PYInitializerTemplate(MTPieLabel, label);
PYPropertyEqualTemplate(MTPieLabel, MTPielabelNormal *, normal);

@end


