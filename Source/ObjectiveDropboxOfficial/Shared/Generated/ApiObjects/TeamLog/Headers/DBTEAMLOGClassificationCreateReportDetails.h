///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGClassificationCreateReportDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ClassificationCreateReportDetails` struct.
///
/// Created Classification report.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGClassificationCreateReportDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ClassificationCreateReportDetails` struct.
///
@interface DBTEAMLOGClassificationCreateReportDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGClassificationCreateReportDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGClassificationCreateReportDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGClassificationCreateReportDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGClassificationCreateReportDetails *)instance;

///
/// Deserializes `DBTEAMLOGClassificationCreateReportDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGClassificationCreateReportDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGClassificationCreateReportDetails`
/// object.
///
+ (DBTEAMLOGClassificationCreateReportDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
