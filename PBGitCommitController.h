//
//  PBGitCommitController.h
//  GitX
//
//  Created by Pieter de Bie on 19-09-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBViewController.h"

@class PBGitIndexController, PBIconAndTextCell, PBWebChangesController, PBGitIndex;
@class PBNiceSplitView;

@interface PBGitCommitController : PBViewController {
	// This might have to transfer over to the PBGitRepository
	// object sometime
	PBGitIndex *index;
    
    NSArray *reviewSignatures;
	
	IBOutlet NSTextView *commitMessageView;
	IBOutlet NSArrayController *unstagedFilesController;
	IBOutlet NSArrayController *cachedFilesController;
	IBOutlet NSButton *commitButton;
    IBOutlet NSPopUpButton *reviewers;

	IBOutlet PBGitIndexController *indexController;
	IBOutlet PBWebChangesController *webController;
	IBOutlet PBNiceSplitView *commitSplitView;
}

@property(readonly) PBGitIndex *index;
@property(readonly) NSArray *reviewSignatures;

- (IBAction) refresh:(id) sender;
- (IBAction) commit:(id) sender;
- (IBAction) forceCommit:(id) sender;
- (IBAction) signOff:(id) sender;
- (IBAction) changeReviewer:(id) sender;
@end
