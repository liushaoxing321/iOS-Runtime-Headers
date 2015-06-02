/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewInvisibleInviteeStatusCell : UITableViewCell {
    UILabel *_commentLabel;
    float _leftInset;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
    UILabel *_nameLabel;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
}

@property (nonatomic, retain) UILabel *commentLabel;
@property (nonatomic) float leftInset;
@property (nonatomic, retain) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *nameBaselineToTopConstraint;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSArray *removableConstraints;

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)commentLabel;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)leftInset;
- (id)minimumHeightConstraint;
- (id)nameBaselineToTopConstraint;
- (id)nameLabel;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setCommentLabel:(id)arg1;
- (void)setLeftInset:(float)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setNameBaselineToTopConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;

@end