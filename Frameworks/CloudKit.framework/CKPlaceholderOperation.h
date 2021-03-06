/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, NSObject<OS_dispatch_group>, NSString;

@interface CKPlaceholderOperation : NSOperation {
    id _context;
    id _daemonInvokeBlock;
    NSObject<OS_dispatch_group> *_group;
    NSString *_operationID;
    NSString *_sectionID;
    NSDate *_startDate;
    bool_isExecuting;
    bool_isFinished;
}

@property(retain) id context;
@property(readonly) id daemonInvokeBlock;
@property bool isExecuting;
@property bool isFinished;
@property(readonly) NSString * operationID;
@property(retain) NSString * sectionID;
@property(retain) NSDate * startDate;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)cancel;
- (id)context;
- (id)daemonInvokeBlock;
- (id)description;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)operationID;
- (id)sectionID;
- (void)setContext:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;

@end
