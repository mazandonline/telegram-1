//
//  TGChangeUserNameContainerView.h
//  Telegram
//
//  Created by keepcoder on 13.09.15.
//  Copyright (c) 2015 keepcoder. All rights reserved.
//

#import "TMView.h"


@interface TGChangeUserObserver : NSObject

@property (nonatomic,copy) void (^willNeedSaveUserName)(NSString *userName);
@property (nonatomic,copy) void (^didChangedUserName)(NSString *userName,BOOL isAcceptable);


@property (nonatomic,strong) NSString *desc;
@property (nonatomic,strong) NSString *placeholder;
@property (nonatomic,strong) NSString *defaultUserName;

@property (nonatomic,strong) id (^needApiObjectWithUserName)(NSString *userName);



-(id)initWithDescription:(NSString *)desc placeholder:(NSString *)placeholder defaultUserName:(NSString *)defaultUserName;

@end

@interface TGChangeUserNameContainerView : TMView

@property (nonatomic,strong) TGChangeUserObserver *oberser;

-(instancetype)initWithFrame:(NSRect)frameRect observer:(TGChangeUserObserver *)observer;


@end
