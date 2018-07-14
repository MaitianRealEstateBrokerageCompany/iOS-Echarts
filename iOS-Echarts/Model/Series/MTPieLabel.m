//
//  MTPieLabel.m
//  iOS-Echarts_iOS
//
//  Created by 范正君 on 2018/7/13.
//  Copyright © 2018年 pluto-y. All rights reserved.
//

#import "MTPieLabel.h"

@implementation MTPielabelNormal
- (instancetype)init {
    if (self = [super init]) {
        _borderWidth = @0;
        _padding = @[@0,@0];
    }
    return self;
}

PYInitializerImpTemplate(MTPielabelNormal);

PYPropertyEqualImpTemplate(MTPielabelNormal,  NSNumber *, borderWidth);
PYPropertyEqualImpTemplate(MTPielabelNormal,  NSArray<NSNumber *> *, padding);

@end

@implementation MTPieLabel
- (instancetype)init {
    if (self = [super init]) {
        _normal = [[MTPielabelNormal alloc] init];
    }
    return self;
}

PYInitializerImpTemplate(MTPieLabel);

PYPropertyEqualImpTemplate(MTPieLabel, MTPielabelNormal *, normal);
@end
