//
//  MTGraphic.h
//  DZNEmptyDataSet
//
//  Created by 范正君 on 2018/9/29.
//

#import <Foundation/Foundation.h>

@class MTGraphicStyle;

@interface MTGraphic : NSObject
/** text image 等*/
@property (nonatomic, copy) NSString *type;
/**左边距离*/
@property (nonatomic, copy) NSNumber *left;
/**底部距离*/
@property (nonatomic, copy) NSNumber *bottom;

@property (nonatomic, strong) MTGraphicStyle *style;

PYInitializerTemplate(MTGraphic, graphic);
PYPropertyEqualTemplate(MTGraphic, NSString *, type);
PYPropertyEqualTemplate(MTGraphic, NSNumber *, left);
PYPropertyEqualTemplate(MTGraphic, NSNumber *, bottom);
PYPropertyEqualTemplate(MTGraphic, MTGraphicStyle *, style);

@end

@interface MTGraphicStyle : NSObject
// 例如：#333
@property (nonatomic, copy) NSString *fill;
// 文字
@property (nonatomic, copy) NSString *text;
//字体 '14px Microsoft YaHei'
@property (nonatomic, copy) NSString *font;

PYInitializerTemplate(MTGraphicStyle, style);

PYPropertyEqualTemplate(MTGraphicStyle, NSString *, fill);
PYPropertyEqualTemplate(MTGraphicStyle, NSString *, text);
PYPropertyEqualTemplate(MTGraphicStyle, NSString *, font);

@end

