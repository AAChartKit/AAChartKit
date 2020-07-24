//
//  AAMarginMake.h
//  AAChartKitDemo
//
//  Created by An An on 2020/7/24.
//  Copyright © 2020 An An. All rights reserved.
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

#ifndef AAMarginMake_h
#define AAMarginMake_h

#define AACHARTKIT_STATIC_INLINE    static inline


AACHARTKIT_STATIC_INLINE NSArray * AAMarginMake(float marginTop, float marginRight, float marginBottom, float marginLeft) {
    return @[
        @(marginTop),
        @(marginRight),
        @(marginBottom),
        @(marginLeft)
    ];
}

AACHARTKIT_STATIC_INLINE NSArray * AAMarginTopBottomMake(float marginTop, float marginBottom) {
    return AAMarginMake(marginTop, 0, marginBottom, 0);
}

AACHARTKIT_STATIC_INLINE NSArray * AAMarginLeftRightMake(float marginLeft, float marginRight) {
    return AAMarginMake(0, marginRight, 0, marginLeft);
}

#endif /* AAMarginMake_h */
