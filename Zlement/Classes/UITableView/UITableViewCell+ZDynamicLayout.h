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

#import <UIKit/UIKit.h>

@interface UITableViewCell (ZDynamicLayout)

/// 如果你的 Cell 中用来确定 Cell 所需高度的 View 是唯一的,
/// 请把此值设置为 YES，可提升一定的性能。
@property (nonatomic, assign) IBInspectable BOOL z_maxYViewFixed;

/// 免注册 IB 创建 UITableViewCell，内部自动处理缓存池。
/// @param tableView tableView
+ (instancetype)z_tableViewCellFromNibWithTableView:(UITableView *)tableView;

/// 免注册 alloc 创建 UITableViewCell，内部自动处理缓存池, 默认 UITableViewCellStyleDefault 类型
/// @param tableView tableView
+ (instancetype)z_tableViewCellFromAllocWithTableView:(UITableView *)tableView;

/// 免注册 alloc 创建 UITableViewCell，内部自动处理缓存池。
/// @param tableView tableView
/// @param style cell style
+ (instancetype)z_tableViewCellFromAllocWithTableView:(UITableView *)tableView style:(UITableViewCellStyle)style;

@end
