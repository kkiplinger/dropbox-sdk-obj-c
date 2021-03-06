///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSendForSignaturePolicy;
@class DBTEAMLOGSendForSignaturePolicyChangedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SendForSignaturePolicyChangedDetails` struct.
///
/// Changed send for signature policy for team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSendForSignaturePolicyChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New send for signature policy.
@property (nonatomic, readonly) DBTEAMLOGSendForSignaturePolicy *dNewValue;

/// Previous send for signature policy.
@property (nonatomic, readonly) DBTEAMLOGSendForSignaturePolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New send for signature policy.
/// @param previousValue Previous send for signature policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGSendForSignaturePolicy *)dNewValue
                    previousValue:(DBTEAMLOGSendForSignaturePolicy *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SendForSignaturePolicyChangedDetails`
/// struct.
///
@interface DBTEAMLOGSendForSignaturePolicyChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSendForSignaturePolicyChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSendForSignaturePolicyChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSendForSignaturePolicyChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSendForSignaturePolicyChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGSendForSignaturePolicyChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSendForSignaturePolicyChangedDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSendForSignaturePolicyChangedDetails` object.
///
+ (DBTEAMLOGSendForSignaturePolicyChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
