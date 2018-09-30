//
//  MTGraphic.m
//  DZNEmptyDataSet
//
//  Created by 范正君 on 2018/9/29.
//

#import "MTGraphic.h"

@implementation MTGraphic

- (instancetype)init {
    if (self = [super init]) {
        _type = @"text";
        _left = @30;
        _bottom = @30;
        _style = [[MTGraphicStyle alloc] init];
    }
    return self;
}
PYInitializerImpTemplate(MTGraphic);

PYPropertyEqualImpTemplate(MTGraphic, NSString *, type);
PYPropertyEqualImpTemplate(MTGraphic, NSNumber *, left);
PYPropertyEqualImpTemplate(MTGraphic, NSNumber *, bottom);
PYPropertyEqualImpTemplate(MTGraphic, MTGraphicStyle *, style);

@end

@implementation MTGraphicStyle
- (instancetype)init {
    if (self = [super init]) {
        _fill = @"#888888";
        _text = @"0";
        _font = @"14px STSong";
    }
    return self;
}

PYInitializerImpTemplate(MTGraphicStyle);

PYPropertyEqualImpTemplate(MTGraphicStyle, NSString *, fill);
PYPropertyEqualImpTemplate(MTGraphicStyle, NSString *, text);
PYPropertyEqualImpTemplate(MTGraphicStyle, NSString *, font);

@end




