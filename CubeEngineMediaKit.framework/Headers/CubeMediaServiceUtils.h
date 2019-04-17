//
//  CubeMediaServiceUtils.h
//  CubeEngineMediaKit
//
//  Created by jianchengpan on 2018/6/28.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AvFoundation.h>
#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>

@interface CubeMediaServiceUtils : NSObject

#pragma mark - file info

/**
 加载媒体文件的制定信息

 @param infoKeys 消息的filepath(传nil时，默认取 duration 属性)
 @param file 文件路径
 @param handler 加载完成回掉
 */
+(void)loadMediaInfo:(NSArray *)infoKeys ofFile:(NSString *)file withHandler:(void(^)(AVAsset *asset, CubeError *error))handler;

/**
 获取媒体时长

 @param asset 已加载时间的asset
 @return 时长
 */
+(CMTime)durationOf:(AVAsset *) asset;

/**
 获取视频文件第一桢图片

 @param asset 已加载时间的asset
 @return 图片
 */
+(UIImage *)generateCoverImageForVideo:(AVAsset *) asset;

/**
 转码文件

 @param asset asset
 @param filePath 转码文件存放路径
 @param outputFileType 输出文件类型
 @param handler 完成回掉
 */
+(void)transcode:(AVAsset *)asset toFilePath:(NSString *)filePath outputFileType:(AVFileType)outputFileType withCompleteHandler:(void(^)(CubeError *error))handler;

#pragma mark - device

/**
 获取指定媒体类型和位置的设备
 
 @note 没有找到指定位置的设备时，返回指定媒体类型的默认设备 [AVCaptureDevice defaultDeviceWithMediaType:mediaType]
 
 @param mediaType 媒体类型
 @param position 位置
 @return 设备
 */
+(AVCaptureDevice *)deviceWithMediaType:(AVMediaType)mediaType andPosition:(AVCaptureDevicePosition)position;

@end
