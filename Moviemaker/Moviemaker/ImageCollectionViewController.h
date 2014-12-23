//
//  ImageCollectionViewController.h
//  Moviemaker
//
//  Created by Anindya on 12/24/14.
//  Copyright (c) 2014 Anindya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@interface ImageCollectionViewController : UICollectionViewController
@property (nonatomic, strong) NSMutableArray *assets;
@property (nonatomic, strong) ALAssetsGroup *assetsGroup;
@end
