//
//  SeafAccountViewController.h
//  seafile
//
//  Created by Wang Wei on 1/12/13.
//  Copyright (c) 2012 Seafile Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StartViewController.h"
enum ACCOUNT_TYPE {
    ACCOUNT_SEACLOUD = 0
};

#define SERVER_SEACLOUD         @"luckyclound"

#define SERVER_SEACLOUD_NAME    @"luckycloud"
#define SERVER_SHIB_NAME        NSLocalizedString(@"Single Sign On", @"Seafile")


@interface SeafAccountViewController : UIViewController

- (id)initWithController:(StartViewController *)controller connection: (SeafConnection *)conn type:(int)type;

@end
