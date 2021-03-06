/* Generated by RuntimeBrowser.
 */

@protocol CKDMMCSItemReaderProtocol <NSObject>

@required

- (CKDMMCSItem *)MMCSItem;
- (CKDMMCSItemGroupContext *)MMCSRequest;
- (BOOL)closeWithError:(id*)arg1;
- (CKFileMetadata *)getFileMetadataWithError:(id*)arg1;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;

@end
