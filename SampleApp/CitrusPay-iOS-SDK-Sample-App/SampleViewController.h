//
//  ViewController.h
//  CitrusPay-iOS-SDK-Sample-App
//
//  Created by Mukesh Patil on 22/06/15.
//  Copyright (c) 2015 CitrusPay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CitrusSdk.h"

@interface SampleViewController : UIViewController{
    CTSAuthLayer *authLayer;
    CTSProfileLayer *proifleLayer;
    CTSPaymentLayer *paymentLayer;
    CTSContactUpdate* contactInfo;
    CTSUserAddress* addressInfo;
    int seedState;
    NSDictionary *customParams;
}
@end

