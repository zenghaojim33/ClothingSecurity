#import "SSignal.h"
#import <Foundation/Foundation.h>

@interface SSignal (Combine)

+ (SSignal *)combineSignals:(NSArray *)signals;
+ (SSignal *)combineSignals:(NSArray *)signals withInitialStates:(NSArray *)initialStates;

+ (SSignal *)mergeSignals:(NSArray *)signals;

@end
