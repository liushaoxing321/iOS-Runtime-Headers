/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {
    TSUZipFileWriter *_archiveWriter;
    BOOL _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id /* block */)arg1;
- (void)close;
- (id)init;
- (id)initWithArchiveWriter:(id)arg1;
- (BOOL)isValid;
- (void)setLowWater:(unsigned long)arg1;
- (void)writeData:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

@end