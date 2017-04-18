//
//  ViewDownInterface.h
//  ADAM - Ausbau der Digitalisierung im Anlagenmanagement
//
//  Created by Jonathan Lucas Fritz on 14.08.16.
//  Copyright © 2016 NOSCIO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADAMerci.h"
#import "ADAM_MapView.h"
#import "ADAMCom.h"
#import "NosAnnot.h"
#import "MBProgressHUD.h"



@interface ViewDownInterface : UIView
@property ADAMerci *bonjour;
@property ADAM_MapView *mapviewadam;
@property ADAMCom *adamcom_instance;
@property NosAnnot *aniode;
@property NSString *stationNumber;
@property MBProgressHUD *HUD2;


-(void)setup;
-(void)loadforID:(NSString*)ID;
-(void)sethiddennow;
-(void)setimageurl:(NSString*)url;
-(void)loadforName:(NSString *)name;
-(void)preLoad:(NSString*)name;




@end
