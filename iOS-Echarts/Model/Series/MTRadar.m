//
//  MTRadar.m
//  iOS-Echarts_iOS
//
//  Created by 范正君 on 2018/10/8.
//  Copyright © 2018年 pluto-y. All rights reserved.
//

#import "MTRadar.h"

@implementation MTRadar

PYInitializerImpTemplate(MTRadar);

PYPropertyEqualImpTemplate(MTRadar, MTRadarName *, name);
PYPropertyEqualImpTemplate(MTRadar, NSNumber*, nameGap);

@end

@implementation MTRadarName

PYInitializerImpTemplate(MTRadarName);

PYPropertyEqualImpTemplate(MTRadarName, id , formatter);

@end
