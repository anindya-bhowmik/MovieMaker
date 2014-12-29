//
//  ImageCollectionViewController.h
//  Moviemaker
//
//  Created by Anindya on 12/24/14.
//  Copyright (c) 2014 Anindya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>
@interface ImageCollectionViewController : UICollectionViewController{
    NSMutableArray *selectedStateArray;
}
@property (nonatomic, strong) NSMutableArray *assets;
@property (nonatomic, strong) ALAssetsGroup *assetsGroup;
@property (nonatomic, strong) ALAssetsLibrary *assetsLibrary;
@property (nonatomic, strong) NSMutableArray *groups;
@end
