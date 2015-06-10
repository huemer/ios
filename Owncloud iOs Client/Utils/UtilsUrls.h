//
//  UtilsUrls.h
//  Owncloud iOs Client
//
//  Created by Javier Gonzalez on 16/10/14.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@class UserDto;

@interface UtilsUrls : NSObject

+ (NSString *) getOwnCloudFilePath;
+ (NSString *) getBundleOfSecurityGroup;
+ (NSString *) bundleSeedID;
+ (NSString *) getFullBundleSecurityGroup;

//Method to skip a file to a iCloud backup
+ (BOOL)addSkipBackupAttributeToItemAtURL:(NSURL *)URL;

//We remove the part of the remote file path that is not necesary
+ (NSString *) getRemovedPartOfFilePathAnd:(UserDto *)mUserDto;

//We generate de local path of the files dinamically
+ (NSString *)getLocalFolderByFilePath:(NSString*) filePath andFileName:(NSString*) fileName andUserDto:(UserDto *) mUser;


//Get the relative path of the document provider using an absolute path
+ (NSString *)getRelativePathForDocumentProviderUsingAboslutePath:(NSString *) abosolutePath;

//Get the path of the temp folder where there are the temp files for the uploads
+ (NSString *) getTempFolderForUploadFiles;

@end
