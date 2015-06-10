//
//  ShareLinkCell.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 17/01/14.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"

@interface ShareLinkCell : SWTableViewCell

@property(nonatomic, weak) IBOutlet UIImageView *fileImageView;
@property(nonatomic, weak) IBOutlet UILabel *fileNameLabel;
@property(nonatomic, weak) IBOutlet UILabel *parentPathLabel;

@end
