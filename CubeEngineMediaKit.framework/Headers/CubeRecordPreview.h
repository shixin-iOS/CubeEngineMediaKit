//
//  CubeRecordPreview.h
//  CubeEngineMediaKit
//
//  Created by jianchengpan on 2018/6/26.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface CubeRecordPreview : UIView

@property (nonatomic, strong) AVCaptureVideoPreviewLayer *previewLayer;

-(instancetype)initWithpreviewLayer:(AVCaptureVideoPreviewLayer *)previewLayer;

@end
