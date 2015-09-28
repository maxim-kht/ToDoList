//
//  ToDoItem.h
//  ToDoList
//
//  Created by Maxim Kukhtenkov on 7/27/15.
//  Copyright (c) 2015 Maxim Kukhtenkov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
