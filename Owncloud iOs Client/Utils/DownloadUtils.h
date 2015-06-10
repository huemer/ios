//
//  DownloadUtils.h
//  Owncloud iOs Client
//
//  Created by Rebeca Martín de León on 29/05/14.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>
#import "AppDelegate.h"

@interface DownloadUtils : NSObject

///-----------------------------------
/// @name thereAreDownloadingFilesOnTheFolder
///-----------------------------------

/**
 * This method checks if there are any files on a download process on the selected folder
 *
 * @return thereAreDownloadingFilesOnTheFolder -> BOOL, return YES if there is a file on a download process inside this folder
 */
+ (BOOL) thereAreDownloadingFilesOnTheFolder: (FileDto *) selectedFolder;


///-----------------------------------
/// @name removeDownloadFileWithPath
///-----------------------------------

/**
 * This method removed a downloaded file from the files system.
 *
 * @param path -> local path of the file.
 */
+ (void) removeDownloadFileWithPath:(NSString *)path;


@end
