/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineLayout : NSObject {
    NSCalendar *_calendar;
    NSMutableArray *_collidingOccurrences;
    <CUIKSingleDayTimelineViewItem> *_currentOccurrence;
    unsigned int _currentOccurrenceIndex;
    NSDate *_endOfDay;
    double _endOfDayAbsoluteTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    <CUIKSingleDayTimelineGeometryDelegate> *_geometryDelegate;
    NSMutableArray *_occurrenceBuckets;
    NSArray *_occurrences;
    NSMutableArray *_partitions;
    <CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
    NSDate *_startOfDay;
    double _startOfDayAbsoluteTime;
}

- (void).cxx_destruct;
- (double)_adjustedEndTimeForOccurrence:(id)arg1;
- (double)_adjustedStartTimeForOccurrence:(id)arg1;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1;
- (void)_capVisibleTextForBucket:(id)arg1;
- (float)_combinedWidthOfPartitions;
- (double)_effectiveEndTimeForOccurrence:(id)arg1;
- (void)_findCollidingOccurrences;
- (void)_generateNewPartitions;
- (void)_initializeFirstGridStripe;
- (BOOL)_inputIsInvalid;
- (void)_mergePartitions;
- (void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2;
- (void)_putCollidingOccurrencesIntoBuckets;
- (void)_reclaimSpaceFromStackedOccurrences;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForStartSeconds:(int)arg1 endSeconds:(int)arg2;
- (void)_stampOccurrenceFrames;
- (float)_topOfOccurrence:(id)arg1;
- (void)applyLayoutToOccurrences;
- (id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 geometryDelegate:(id)arg4 screenUtilsDelegate:(id)arg5 calendar:(id)arg6;

@end