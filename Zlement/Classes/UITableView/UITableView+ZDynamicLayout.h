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
#import "UITableViewHeaderFooterView+ZDynamicLayout.h"
#import "UITableViewCell+ZDynamicLayout.h"

typedef NS_ENUM(NSInteger, ZHeaderFooterViewDynamicLayoutType) {
    ZHeaderFooterViewDynamicLayoutTypeHeader = 0,
    ZHeaderFooterViewDynamicLayoutTypeFooter = 1,
};

typedef void(^ZConfigurationCellBlock)(__kindof UITableViewCell *cell);
typedef void(^ZConfigurationHeaderFooterViewBlock)(__kindof UITableViewHeaderFooterView *headerFooterView);

@interface UITableView (ZDynamicLayout)

#pragma mark - cell

/*
 获取 Cell 需要的高度 ，内部无缓存操作
 @param clas cell class
 @param configuration 布局 cell，内部不会拥有 Block，不需要 使用__weak。
 
 ...
 
 #import <UITableViewDynamicLayoutCacheHeight/UITableViewDynamicLayoutCacheHeight.h>
 
 - (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
 return [tableView z_heightWithCellClass:UITableViewCell.class
 configuration:^(__kindof UITableViewCell * _Nonnull cell) {
 cell.textLabel.text = @"My Text";
 }];
 }
 
 */
- (CGFloat)z_heightWithCellClass:(Class)clas
                   configuration:(ZConfigurationCellBlock)configuration;

/// 获取 Cell 需要的高度 ，内部自动处理缓存，缓存标识 indexPath
/// @param clas cell class
/// @param indexPath 使用 indexPath 做缓存标识
/// @param configuration 布局 cell，内部不会拥有 Block，不需要 使用__weak。
- (CGFloat)z_heightWithCellClass:(Class)clas
                cacheByIndexPath:(NSIndexPath *)indexPath
                   configuration:(ZConfigurationCellBlock)configuration;

/// 获取 Cell 需要的高度 ，内部自动处理缓存，缓存标识 key
/// @param clas cell class
/// @param key 使用 key 做缓存标识
/// @param configuration 布局 cell，内部不会拥有 Block，不需要 使用__weak。
- (CGFloat)z_heightWithCellClass:(Class)clas
                      cacheByKey:(id<NSCopying>)key
                   configuration:(ZConfigurationCellBlock)configuration;

#pragma mark - HeaderFooter

/// 获取 HeaderFooter 需要的高度 ，内部无缓存操作
/// @param clas HeaderFooter class
/// @param type HeaderFooter类型，Header 或者 Footer
/// @param configuration 布局 HeaderFooter，内部不会拥有 Block，不需要 使用__weak。
- (CGFloat)z_heightWithHeaderFooterViewClass:(Class)clas
                                        type:(ZHeaderFooterViewDynamicLayoutType)type
                               configuration:(ZConfigurationHeaderFooterViewBlock)configuration;

/// 获取 HeaderFooter 需要的高度 ， 内部自动处理缓存，缓存标识 section
/// @param clas HeaderFooter class
/// @param type HeaderFooter类型，Header 或者 Footer
/// @param section 使用 section 做缓存标识
/// @param configuration 布局 HeaderFooter，内部不会拥有 Block，不需要 使用__weak。
- (CGFloat)z_heightWithHeaderFooterViewClass:(Class)clas
                                        type:(ZHeaderFooterViewDynamicLayoutType)type
                              cacheBySection:(NSInteger)section
                               configuration:(ZConfigurationHeaderFooterViewBlock)configuration;

/// 获取 HeaderFooter 需要的高度 ， 内部自动处理缓存，缓存标识 key
/// @param clas HeaderFooter class
/// @param type HeaderFooter类型，Header 或者 Footer
/// @param key 使用 key 做缓存标识
/// @param configuration 布局 HeaderFooter，内部不会拥有 Block，不需要 使用__weak。
- (CGFloat)z_heightWithHeaderFooterViewClass:(Class)clas
                                        type:(ZHeaderFooterViewDynamicLayoutType)type
                                  cacheByKey:(id<NSCopying>)key
                               configuration:(ZConfigurationHeaderFooterViewBlock)configuration;

@end
