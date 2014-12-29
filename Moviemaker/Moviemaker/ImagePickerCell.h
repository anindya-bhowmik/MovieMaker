//
//  ImagePickerCell.h
//  Moviemaker
//
//  Created by Anindya on 12/28/14.
//  Copyright (c) 2014 Anindya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImagePickerCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UIView *selectedView;
@property (strong, nonatomic) IBOutlet UIImageView *thumbImage;

@end
