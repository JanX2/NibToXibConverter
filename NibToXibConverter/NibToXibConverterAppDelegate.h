//
//  NibToXibConverterAppDelegate.h
//  NibToXibConverter
//
//  Created by Devarshi on 12/10/12.
//  Copyright 2012 DaemonConstruction. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NibToXibConverterAppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic, weak) IBOutlet NSWindow *window;
@property (nonatomic, readwrite, strong) NSMutableArray *ibtoolCommandsArray;
@property (nonatomic, readwrite, strong) NSString *status;
@property (nonatomic, readwrite, strong) NSURL *inputFolderUrl;
@property (nonatomic, readwrite, strong) NSURL *outputFolderUrl;
@property (nonatomic, assign) BOOL converting;
@property (nonatomic, assign) NSInteger processedFilesCount;
@property (nonatomic, assign) NSInteger totalFilesCount;
@property (nonatomic, assign) NSInteger leftFilesCount;

- (void)convertToXIBFromNib;
- (void)chooseInputDirectory;
- (void)chooseOutputDirectory;
- (void)clearAll;
@end
