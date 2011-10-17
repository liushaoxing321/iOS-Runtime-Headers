/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADMiterLineJoin : OADLineJoin  {
    float mLimit;
    unsigned int mIsLimitOverridden : 1;
}

+ (id)defaultProperties;

- (float)limit;
- (void)setLimit:(float)arg1;
- (BOOL)isLimitOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end