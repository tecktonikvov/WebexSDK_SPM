//
//  SparkVideoRender.h
//  SparkMacDesktop
//
//  Created by jimmcoyn on 05/10/2016.
//  Copyright © 2016 Cisco Systems. All rights reserved.
//

#ifndef SparkVideoLayer_h
#define SparkVideoLayer_h

#import "UCFBridge/CocoaFrameworks.h"

typedef enum : NSUInteger {
    VideoRenderTypeDefault,
    VideoRenderTypeCustom
} VideoRenderType;


@interface SparkVideoLayer : UIView
- (void)useVideoRenderType:(VideoRenderType)type;

@end
#endif // SparkVideoLayer_h
