//
//  DDGStoriesProvider.h
//  DuckDuckGo
//
//  Created by Ishaan Gulrajani on 7/17/12.
//
//

#import <Foundation/Foundation.h>

@interface DDGNewsProvider : NSObject

+(DDGNewsProvider *)sharedProvider;

-(void)downloadSourcesFinished:(void (^)())finished;
-(NSDictionary *)sources;
-(NSArray *)enabledSourceIDs;
-(void)setSourceWithID:(NSString *)sourceID enabled:(BOOL)enabled;

-(NSArray *)customSources;
-(void)addCustomSource:(NSString *)customSource;
-(void)deleteCustomSourceAtIndex:(NSUInteger)index;

-(NSArray *)stories;
-(void)downloadStoriesInTableView:(UITableView *)tableView finished:(void (^)())finished;

-(NSArray *)dateGroups; // @[@"Today",@"Yesterday",@"Last Week"]
-(NSDictionary *)groupedStories; // @{@"Today": [...], @"Yesterday": [...], @"Last Week": [...]}

@end