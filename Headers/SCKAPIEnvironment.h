//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchCloudKit/NSCopying-Protocol.h>
#import <SketchCloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SCKAPIEnvironment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_keychainServiceNamePrefix;
}

+ (id)current;
+ (BOOL)isAValidCloudShareHost:(id)arg1;
+ (BOOL)isProductionHost:(id)arg1;
+ (id)nameFromHost:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)ssoDidChange;
+ (id)authenticationDidChange;
+ (id)keychainErrorForStatus:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *keychainServiceNamePrefix; // @synthesize keychainServiceNamePrefix=_keychainServiceNamePrefix;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) long long definition;
@property(readonly, nonatomic) NSString *displayName;
- (BOOL)isValidEnvironmentForCloudShareURL:(id)arg1;
@property(readonly, nonatomic) NSString *sketchComHost;
@property(readonly, nonatomic) NSString *host;
- (id)hostWithSubdomain:(id)arg1;
- (void)setCurrent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefinition:(long long)arg1 keychainServiceNamePrefix:(id)arg2;
- (id)initWithDefinition:(long long)arg1;
- (id)initWithHost:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)removeAuthenticationAndReturnError:(id *)arg1;
- (void)invalidateAuthenticationCache;
- (void)cache:(id)arg1;
- (void)notifyAuthenticationChange:(id)arg1;
- (BOOL)assignSession:(id)arg1 error:(id *)arg2;
- (id)unsafeAuthenticationAndReturnError:(id *)arg1;
- (id)authenticationAndReturnError:(id *)arg1;
@property(nonatomic, readonly) BOOL hasAuthentication;
- (int)deleteItemForUserID:(id)arg1;
- (int)updatePasswordData:(id)arg1 forUserID:(id)arg2;
- (int)addPasswordData:(id)arg1 forUserID:(id)arg2;
- (int)queryPasswordData:(id *)arg1 forUserID:(id)arg2;
- (int)queryExistingUserID:(id *)arg1;
- (id)keychainItemDictionary;
- (id)keychainQueryDictionary;
- (id)keychainLabel;
@property(readonly, nonatomic) NSString *keychainServiceName;
- (id)applicationVariant;
- (BOOL)setKeychainAuthentication:(id)arg1 error:(id *)arg2;
- (id)keychainAuthenticationWithError:(id *)arg1;
@property(readonly, nonatomic) NSArray *publicKeys;
@property(readonly, nonatomic) NSString *requestSignatureSecret;
@property(readonly, nonatomic) NSURL *resetPasswordURL;
- (id)signInWithSSOURLForOrganizationShortName:(id)arg1;
@property(readonly, nonatomic) NSURL *signUpURL;
- (id)sharesOverviewURLForUserID:(id)arg1;
- (id)settingsURLForShare:(id)arg1;
- (id)accountSettingsURLForUserID:(id)arg1;
- (id)frontendURLWithPath:(id)arg1 queryItems:(id)arg2;
- (id)frontendOverrideBaseURL;

@end

