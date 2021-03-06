//
//  DDContactObserverManager.h
//  Duoduo
//
//  Created by zuoye on 13-11-25.
//  Copyright (c) 2013年 zuoye. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DDListObject,DDContactList;

@protocol DDListObjectObserver <NSObject>

- (NSSet *)updateListObject:(DDListObject *)inObject keys:(NSSet *)inModifiedKeys silent:(BOOL)silent;
@end



@interface DDContactObserverManager : NSObject{
    
}

+ (DDContactObserverManager *)sharedManager;

@end
