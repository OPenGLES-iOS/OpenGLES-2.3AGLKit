//
//  ViewController.h
//  OpenGLES 2.3AGLKit绘画三角形
//
//  Created by ShiWen on 2017/5/10.
//  Copyright © 2017年 ShiWen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
@class AGLKVertexAttribArrayBuffer;
@interface ViewController : GLKViewController

/**
 *  <#type#>
 */
@property (nonatomic , strong)GLKBaseEffect *mBaseEffect;
/**
 *  <#type#>
 */
@property (nonatomic , strong)AGLKVertexAttribArrayBuffer *vertexBuffer;


@end

