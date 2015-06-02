/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStationsCollectionViewTemplateTextElement : NSObject {
    float _defaultFirstBaselineOffset;
    int _defaultNumberOfLines;
    UIFont *_emphasizedFont;
    NSString *_fontTextStyle;
    MPUTextDrawingCache *_nowPlayingTextDrawingCache;
    int _numberOfLines;
    UIFont *_regularFont;
    float _scaledFirstBaselineOffset;
    MPUTextDrawingCache *_textDrawingCache;
    BOOL _wantsAdditionalLineForExtraLargeContentSizes;
    BOOL _wantsEmphasizedStationName;
}

@property (nonatomic, readonly) float defaultFirstBaselineOffset;
@property (nonatomic, readonly) int defaultNumberOfLines;
@property (nonatomic, readonly) NSString *fontTextStyle;
@property (nonatomic, readonly) MPUTextDrawingCache *nowPlayingTextDrawingCache;
@property (nonatomic, readonly) int numberOfLines;
@property (nonatomic, readonly) float scaledFirstBaselineOffset;
@property (nonatomic, readonly) UIFont *tallestFont;
@property (nonatomic, readonly) MPUTextDrawingCache *textDrawingCache;
@property (nonatomic, readonly) BOOL wantsAdditionalLineForExtraLargeContentSizes;
@property (nonatomic, readonly) BOOL wantsEmphasizedStationName;

- (void).cxx_destruct;
- (id)_fontWithEmphasis:(BOOL)arg1;
- (id)_newTextDrawingCacheWithStationNameEmphasizer:(BOOL)arg1;
- (id)_textAttributesByReplacingFontInTextAttributes:(id)arg1 withFont:(id)arg2;
- (void)_updateTextAttributesTextDrawingCache:(id)arg1;
- (float)defaultFirstBaselineOffset;
- (int)defaultNumberOfLines;
- (id)fontTextStyle;
- (id)initWithFontTextStyle:(id)arg1 defaultFirstBaselineOffset:(float)arg2 defaultNumberOfLines:(int)arg3 wantsAdditionalLineForExtraLargeContentSizes:(BOOL)arg4 wantsEmphasizedStationName:(BOOL)arg5;
- (id)nowPlayingTextDrawingCache;
- (int)numberOfLines;
- (float)scaledFirstBaselineOffset;
- (id)tallestFont;
- (id)textDrawingCache;
- (void)updateForPreferredContentSizeChange;
- (BOOL)wantsAdditionalLineForExtraLargeContentSizes;
- (BOOL)wantsEmphasizedStationName;

@end