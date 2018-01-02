//
//  SAMacro.h
//  SAMacro
//
//  Created by Smart-AI on 2017/10/13.
//  Copyright © 2017年 Smart-AI. All rights reserved.
//

#ifndef SAMacro_h
#define SAMacro_h

#define SA_SCREEN               	[UIScreen mainScreen]
#define SA_DEVICE               	[UIDevice currentDevice]
#define SA_BOUNDS               	[SA_SCREEN bounds]
#define SA_VERSION              	[SA_DEVICE systemVersion]
#define SA_SCREEN_SIZE          	SA_BOUNDS.size
#define SA_SCREEN_WIDTH         	SA_SCREEN_SIZE.width
#define SA_SCREEN_HEIGHT        	SA_SCREEN_SIZE.height

#define SA_NAV_HEIGHT           	64
#define SA_TAB_HEIGHT           	49

#define SA_WHITE_COLOR           	[UIColor whiteColor]
#define SA_BLACK_COLOR           	[UIColor blackColor]
#define SA_CLEAR_COLOR           	[UIColor clearColor]
#define SA_GRAY_COLOR            	[UIColor grayColor]
#define SA_LIGHT_GRAY_COLOR      	[UIColor lightGrayColor]

#define SA_RGBA(r, g, b, a)     	[UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define SA_RGB(r, g, b)         	SA_RGBA(r, g, b, 1)
#define SA_RAN_COLOR            	SA_RGB(arc4random()%256,arc4random()%256,arc4random()%256)

#define SA_IMAGE(i)                 [UIImage imageNamed:i]

#define KFont(s)                    [UIFont systemFontOfSize:s]
#define KFontPF(s)   			    [UIFont fontWithName:@"PingFangSC-Regular" size:s]
#define KFontPFM(s)                 [UIFont fontWithName:@"PingFangSC-Medium" size:s]

#define SA_LTS(longNum)             [NSString stringWithFormat:@"%ld", longNum]
#define SA_ITS(intNum)              [NSString stringWithFormat:@"%d", intNum]
#define SA_FTS(floatNum)            [NSString stringWithFormat:@"%f", floatNum]

#define SA_DEFAULTS                 [NSUserDefaults standardUserDefaults]
#define SA_SYNC                     [SA_DEFAULTS synchronize]

#ifndef SA_WEAKFY

#if DEBUG
#define SA_WEAKFY(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
#else
#define SA_WEAKFY(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
#endif

#endif

#ifndef SA_STRONGFY

#if DEBUG
#define SA_STRONGFY(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
#else
#define SA_STRONGFY(object) try{} @finally{} __typeof__(object) object = weak##_##object;
#endif

#endif

#endif
