//
//  MTRadar.h
//  iOS-Echarts_iOS
//
//  Created by 范正君 on 2018/10/8.
//  Copyright © 2018年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MTRadarName;

@interface MTRadar : NSObject

@property (nonatomic, strong) MTRadarName *name;
@property (nonatomic, strong) NSNumber *nameGap;
@property (nonatomic, strong) NSMutableArray *indicator;
//[ default: 75% ]的半径，数组的第一项是内半径，第二项是外半径。支持设置成百分比，相对于容器高宽中较小的一项的一半。
@property (nonatomic, strong) id radius;

PYInitializerTemplate(MTRadar, radar);
PYPropertyEqualTemplate(MTRadar, MTRadarName *, name);
PYPropertyEqualTemplate(MTRadar, NSNumber*, nameGap);
PYPropertyEqualTemplate(MTRadar, NSMutableArray *, indicator);
PYPropertyEqualTemplate(MTRadar, id, radius);

@end


@interface MTRadarName : NSObject

@property (nonatomic, strong) id formatter;

PYInitializerTemplate(MTRadarName, name);

PYPropertyEqualTemplate(MTRadarName, id , formatter);

@end
