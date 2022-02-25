//    MIT License
//
//    Copyright (c) 2019 https://github.com/lzackx
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy
//    of this software and associated documentation files (the "Software"), to deal
//    in the Software without restriction, including without limitation the rights
//    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//    copies of the Software, and to permit persons to whom the Software is
//    furnished to do so, subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//    SOFTWARE.

////////////////
///   v5.2.0
////////////////

#ifndef UITableViewDynamicLayoutCacheHeight_h
#define UITableViewDynamicLayoutCacheHeight_h

#ifdef DEBUG
#define Z_UITableView_DynamicLayout_LOG(...) if (UITableViewDynamicLayoutCacheHeight.isOpenDebugLog) {NSLog(__VA_ARGS__);}
#else
    #define Z_UITableView_DynamicLayout_LOG(...)
#endif

#import "UITableViewHeaderFooterView+ZDynamicLayout.h"
#import "UITableViewCell+ZDynamicLayout.h"
#import "UITableView+ZDynamicLayout.h"

@interface UITableViewDynamicLayoutCacheHeight : NSObject

/// 是否开启 debug Log，默认 NO 关闭。
@property (class, nonatomic, assign, getter=isOpenDebugLog) BOOL openDebugLog;

@end

#endif


