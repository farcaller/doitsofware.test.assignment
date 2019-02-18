//
//  RemindersScreenViewController.h
//  TestAssignmentDoItSoftware
//
//  Created by Vladimir Samoylenko on 2/18/19.
//  Copyright © 2019 TheRedQueen. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RemindersScreenViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>{
    
    NSMutableArray *arrReminders;
    
}

@property (weak, nonatomic) IBOutlet UITableView *tblReminders;


@end

NS_ASSUME_NONNULL_END
