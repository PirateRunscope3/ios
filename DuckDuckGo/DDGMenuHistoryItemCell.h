//
//  DDGMenuHistoryItemCell.h
//  DuckDuckGo
//
//  Created by Mic Pringle on 28/03/2014.
//
//

#import <UIKit/UIKit.h>
#import "DDGHistoryItem.h"

@class DDGMenuHistoryItemCell;

@protocol DDGHistoryItemCellDelegate <NSObject>

-(void)plusButtonWasPushed:(DDGMenuHistoryItemCell*)menuCell;

@end


@interface DDGMenuHistoryItemCell : UITableViewCell

@property (nonatomic, strong) DDGHistoryItem* historyItem;
@property (nonatomic, strong) NSDictionary* bookmarkItem;
@property (nonatomic, strong) id<DDGHistoryItemCellDelegate> historyDelegate;
@property (nonatomic, strong) UIView* separatorView;

-(id)initWithReuseIdentifier:(NSString*)reuseIdentifier;

-(void)setIsLastItem:(BOOL)isLastItem;

@end
