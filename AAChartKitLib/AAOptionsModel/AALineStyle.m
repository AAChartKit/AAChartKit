//
//  AALineStyle.m
//  AAChartKitDemo
//
//  Created by AnAn on 2020/8/27.
//  Copyright © 2020 AnAn. All rights reserved.
//*************** ...... SOURCE CODE ...... ***************
//***...................................................***
//*** https://github.com/AAChartModel/AAChartKit        ***
//*** https://github.com/AAChartModel/AAChartKit-Swift  ***
//***...................................................***
//*************** ...... SOURCE CODE ...... ***************

/*
 
 * -------------------------------------------------------------------------------
 *
 * 🌕 🌖 🌗 🌘  ❀❀❀   WARM TIPS!!!   ❀❀❀ 🌑 🌒 🌓 🌔
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/7842508/codeforu
 * JianShu       : https://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import "AALineStyle.h"

@implementation AALineStyle

AAPropSetFuncImplementation(AALineStyle, NSString *, dashStyle)  //准星线样式
AAPropSetFuncImplementation(AALineStyle, NSString *, color)  //准星线颜色
AAPropSetFuncImplementation(AALineStyle, NSNumber *, width)  //准星线宽度
AAPropSetFuncImplementation(AALineStyle, NSNumber *, zIndex)  //准星线的层叠值, 增大层叠值可以让准星线显示在数据里或网格线的上方。 默认是：2.

@end
