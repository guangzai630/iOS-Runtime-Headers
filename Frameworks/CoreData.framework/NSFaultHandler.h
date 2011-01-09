/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStore;



@interface NSFaultHandler : NSObject 
{
    NSPersistentStore *_store;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)initWithPersistenceStore:(id)arg1;
- (id)persistenceStore;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)fulfillFault:(id)arg1 withContext:(id)arg2;
- (id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3;
- (void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2;
- (void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2;

@end