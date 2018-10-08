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

PYInitializerTemplate(MTRadar, radar);
PYPropertyEqualTemplate(MTRadar, MTRadarName *, name);
PYPropertyEqualTemplate(MTRadar, NSNumber*, nameGap);
PYPropertyEqualTemplate(MTRadar, NSMutableArray *, indicator);

@end


@interface MTRadarName : NSObject

@property (nonatomic, strong) id formatter;

PYInitializerTemplate(MTRadarName, name);

PYPropertyEqualTemplate(MTRadarName, id , formatter);

@end
