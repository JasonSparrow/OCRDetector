//
//  Document.h
//  OCRDetector
//
//  Created by 王腾飞 on 2017/11/12.
//  Copyright © 2017年 王腾飞. All rights reserved.
//

/**
 OpenCV 集成步骤
 1. 官网下载framework
 2.
 libc++.tbd
 AVFoundation.framework
 //CoreImage.framework
 //CoreGraphics.framework
 //QuartzCore.framework
 //Accelerate.framework
 如果要使用摄像头做视频处理，还需要添加以下两个依赖库：
 
 //CoreVideo.framework
 CoreMedia.framework
 AssetsLibrary.framework
 
 3.
 pch文件添加
 #ifdef __cplusplus
 #import <opencv2/opencv.hpp>
 #endif
 */


/*
 1. 删除文件
 命令
 rm 文件名
 2. 删除文件夹
 命令
 sudo rm -r -f 文件夹名
 */

/*************************************************************************************/
//需要去官网下载最新版的OpenCV集成到工程
