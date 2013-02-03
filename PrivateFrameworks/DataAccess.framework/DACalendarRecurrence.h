/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DACalendarRecurrence : DACalendarObject {
}

@property(retain) NSDate *endDate;
@property NSUInteger count;
@property NSInteger frequency;
@property NSUInteger interval;
@property(readonly) NSInteger uid;
@property NSInteger weekStart;

- (NSUInteger)count;
- (id)endDate;
- (NSInteger)frequency;
- (NSUInteger)interval;
- (void)setCount:(NSUInteger)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFrequency:(NSInteger)arg1;
- (void)setInterval:(NSUInteger)arg1;
- (void)setWeekStart:(NSInteger)arg1;
- (NSInteger)uid;
- (NSInteger)weekStart;

@end