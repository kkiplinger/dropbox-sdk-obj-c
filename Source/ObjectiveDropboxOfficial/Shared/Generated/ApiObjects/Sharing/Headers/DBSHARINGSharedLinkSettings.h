///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGLinkAudience;
@class DBSHARINGRequestedLinkAccessLevel;
@class DBSHARINGRequestedVisibility;
@class DBSHARINGSharedLinkSettings;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkSettings` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedLinkSettings : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The requested access for this shared link.
@property (nonatomic, readonly, nullable) DBSHARINGRequestedVisibility *requestedVisibility;

/// If requestedVisibility is `password` in `DBSHARINGRequestedVisibility` this
/// is needed to specify the password to access the link.
@property (nonatomic, readonly, copy, nullable) NSString *linkPassword;

/// Expiration time of the shared link. By default the link won't expire.
@property (nonatomic, readonly, nullable) NSDate *expires;

/// The new audience who can benefit from the access level specified by the
/// link's access level specified in the `link_access_level` field of
/// `LinkPermissions`. This is used in conjunction with team policies and shared
/// folder policies to determine the final effective audience type in the
/// `effective_audience` field of `LinkPermissions.
@property (nonatomic, readonly, nullable) DBSHARINGLinkAudience *audience;

/// Requested access level you want the audience to gain from this link. Note,
/// modifying access level for an existing link is not supported.
@property (nonatomic, readonly, nullable) DBSHARINGRequestedLinkAccessLevel *access;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param requestedVisibility The requested access for this shared link.
/// @param linkPassword If requestedVisibility is `password` in
/// `DBSHARINGRequestedVisibility` this is needed to specify the password to
/// access the link.
/// @param expires Expiration time of the shared link. By default the link won't
/// expire.
/// @param audience The new audience who can benefit from the access level
/// specified by the link's access level specified in the `link_access_level`
/// field of `LinkPermissions`. This is used in conjunction with team policies
/// and shared folder policies to determine the final effective audience type in
/// the `effective_audience` field of `LinkPermissions.
/// @param access Requested access level you want the audience to gain from this
/// link. Note, modifying access level for an existing link is not supported.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestedVisibility:(nullable DBSHARINGRequestedVisibility *)requestedVisibility
                               linkPassword:(nullable NSString *)linkPassword
                                    expires:(nullable NSDate *)expires
                                   audience:(nullable DBSHARINGLinkAudience *)audience
                                     access:(nullable DBSHARINGRequestedLinkAccessLevel *)access;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedLinkSettings` struct.
///
@interface DBSHARINGSharedLinkSettingsSerializer : NSObject

///
/// Serializes `DBSHARINGSharedLinkSettings` instances.
///
/// @param instance An instance of the `DBSHARINGSharedLinkSettings` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedLinkSettings` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGSharedLinkSettings *)instance;

///
/// Deserializes `DBSHARINGSharedLinkSettings` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedLinkSettings` API object.
///
/// @return An instantiation of the `DBSHARINGSharedLinkSettings` object.
///
+ (DBSHARINGSharedLinkSettings *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
