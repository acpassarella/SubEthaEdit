//
//  VIMTextView.h
//  VIMode
//
//  Created by Martin Pittenauer on 25.04.05.
//  Copyright 2005 TheCodingMonkeys. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TCMVIController.h"


@interface VIMTextView : NSTextView {

    TCMVIController *I_viController;
}
- (void) superKeyDown:(NSEvent *) event;

@end