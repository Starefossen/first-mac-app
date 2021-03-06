//
//  DNTAppDelegate.h
//  First Mac App
//
//  Created by Hans Kristian Flaatten on 9/20-13.
//  Copyright (c) 2013 Hans Kristian Flaatten. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DNTAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSSlider *slider;

- (IBAction)mute:(id)sender;
- (IBAction)takeFloatValueForVolumeFrom:(id)sender;

@end
