/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableProcedureRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableMedicalCodingListList * _bodySitesCodings;
    HDCodableMedicalCodingList * _categoryCodings;
    HDCodableMedicalCodingListList * _complicationsCodings;
    NSData * _executionEndDate;
    NSData * _executionStartDate;
    HDCodableMedicalCodingListList * _followUpsCodings;
    struct { 
        unsigned int notPerformed : 1; 
    }  _has;
    HDCodableMedicalRecord * _medicalRecord;
    bool  _notPerformed;
    HDCodableMedicalCodingList * _outcomeCodings;
    HDCodableStringList * _performers;
    HDCodableMedicalCodingList * _procedureCodings;
    HDCodableMedicalCodingList * _reasonCodings;
    HDCodableMedicalCodingListList * _reasonsNotPerformedCodings;
    HDCodableMedicalCoding * _statusCoding;
}

@property (nonatomic, retain) HDCodableMedicalCodingListList *bodySitesCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *categoryCodings;
@property (nonatomic, retain) HDCodableMedicalCodingListList *complicationsCodings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *executionEndDate;
@property (nonatomic, retain) NSData *executionStartDate;
@property (nonatomic, retain) HDCodableMedicalCodingListList *followUpsCodings;
@property (nonatomic, readonly) bool hasBodySitesCodings;
@property (nonatomic, readonly) bool hasCategoryCodings;
@property (nonatomic, readonly) bool hasComplicationsCodings;
@property (nonatomic, readonly) bool hasExecutionEndDate;
@property (nonatomic, readonly) bool hasExecutionStartDate;
@property (nonatomic, readonly) bool hasFollowUpsCodings;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic) bool hasNotPerformed;
@property (nonatomic, readonly) bool hasOutcomeCodings;
@property (nonatomic, readonly) bool hasPerformers;
@property (nonatomic, readonly) bool hasProcedureCodings;
@property (nonatomic, readonly) bool hasReasonCodings;
@property (nonatomic, readonly) bool hasReasonsNotPerformedCodings;
@property (nonatomic, readonly) bool hasStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic) bool notPerformed;
@property (nonatomic, retain) HDCodableMedicalCodingList *outcomeCodings;
@property (nonatomic, retain) HDCodableStringList *performers;
@property (nonatomic, retain) HDCodableMedicalCodingList *procedureCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *reasonCodings;
@property (nonatomic, retain) HDCodableMedicalCodingListList *reasonsNotPerformedCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *statusCoding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)bodySitesCodings;
- (id)categoryCodings;
- (id)complicationsCodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executionEndDate;
- (id)executionStartDate;
- (id)followUpsCodings;
- (bool)hasBodySitesCodings;
- (bool)hasCategoryCodings;
- (bool)hasComplicationsCodings;
- (bool)hasExecutionEndDate;
- (bool)hasExecutionStartDate;
- (bool)hasFollowUpsCodings;
- (bool)hasMedicalRecord;
- (bool)hasNotPerformed;
- (bool)hasOutcomeCodings;
- (bool)hasPerformers;
- (bool)hasProcedureCodings;
- (bool)hasReasonCodings;
- (bool)hasReasonsNotPerformedCodings;
- (bool)hasStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (bool)notPerformed;
- (id)outcomeCodings;
- (id)performers;
- (id)procedureCodings;
- (bool)readFrom:(id)arg1;
- (id)reasonCodings;
- (id)reasonsNotPerformedCodings;
- (void)setBodySitesCodings:(id)arg1;
- (void)setCategoryCodings:(id)arg1;
- (void)setComplicationsCodings:(id)arg1;
- (void)setExecutionEndDate:(id)arg1;
- (void)setExecutionStartDate:(id)arg1;
- (void)setFollowUpsCodings:(id)arg1;
- (void)setHasNotPerformed:(bool)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setNotPerformed:(bool)arg1;
- (void)setOutcomeCodings:(id)arg1;
- (void)setPerformers:(id)arg1;
- (void)setProcedureCodings:(id)arg1;
- (void)setReasonCodings:(id)arg1;
- (void)setReasonsNotPerformedCodings:(id)arg1;
- (void)setStatusCoding:(id)arg1;
- (id)statusCoding;
- (void)writeTo:(id)arg1;

@end