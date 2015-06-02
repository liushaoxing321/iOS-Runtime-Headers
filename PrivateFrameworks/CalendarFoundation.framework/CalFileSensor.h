/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalFileSensor : NSObject {
    id /* block */ _eventBlock;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    BOOL _started;
    int _type;
}

@property (nonatomic, copy) id /* block */ eventBlock;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) BOOL started;
@property (nonatomic) int type;

+ (unsigned long)_maskForFileSensorType:(int)arg1;
+ (id)copyFileSensorTypeAsString:(int)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)eventBlock;
- (id)init;
- (id)initWithPath:(id)arg1 andType:(int)arg2;
- (id)path;
- (void)setEventBlock:(id /* block */)arg1;
- (void)setPath:(id)arg1;
- (void)setStarted:(BOOL)arg1;
- (void)setType:(int)arg1;
- (void)start;
- (BOOL)started;
- (void)stop;
- (int)type;

@end