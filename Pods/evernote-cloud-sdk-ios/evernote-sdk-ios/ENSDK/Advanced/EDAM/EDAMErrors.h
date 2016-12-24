/*
 * Copyright (c) 2015 by Evernote Corporation, All rights reserved.
 *
 * Use of the source code and binary libraries included in this package
 * is permitted under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "ENTProtocol.h"
#import "ENTException.h"
#import "FATObject.h"
#import "EDAMTypes.h"

enum EDAMErrorCode {
  EDAMErrorCode_UNKNOWN = 1,
  EDAMErrorCode_BAD_DATA_FORMAT = 2,
  EDAMErrorCode_PERMISSION_DENIED = 3,
  EDAMErrorCode_INTERNAL_ERROR = 4,
  EDAMErrorCode_DATA_REQUIRED = 5,
  EDAMErrorCode_LIMIT_REACHED = 6,
  EDAMErrorCode_QUOTA_REACHED = 7,
  EDAMErrorCode_INVALID_AUTH = 8,
  EDAMErrorCode_AUTH_EXPIRED = 9,
  EDAMErrorCode_DATA_CONFLICT = 10,
  EDAMErrorCode_ENML_VALIDATION = 11,
  EDAMErrorCode_SHARD_UNAVAILABLE = 12,
  EDAMErrorCode_LEN_TOO_SHORT = 13,
  EDAMErrorCode_LEN_TOO_LONG = 14,
  EDAMErrorCode_TOO_FEW = 15,
  EDAMErrorCode_TOO_MANY = 16,
  EDAMErrorCode_UNSUPPORTED_OPERATION = 17,
  EDAMErrorCode_TAKEN_DOWN = 18,
  EDAMErrorCode_RATE_LIMIT_REACHED = 19,
  EDAMErrorCode_BUSINESS_SECURITY_LOGIN_REQUIRED = 20
};

enum EDAMInvalidContactReason {
  EDAMInvalidContactReason_BAD_ADDRESS = 0,
  EDAMInvalidContactReason_DUPLICATE_CONTACT = 1,
  EDAMInvalidContactReason_NO_CONNECTION = 2
};

@interface EDAMUserException : FATException 
@property (nonatomic, strong) NSNumber * errorCode; // int
@property (nonatomic, strong) NSString * parameter;
@end

@interface EDAMSystemException : FATException 
@property (nonatomic, strong) NSNumber * errorCode; // int
@property (nonatomic, strong) NSString * message;
@property (nonatomic, strong) NSNumber * rateLimitDuration; // int32_t
@end

@interface EDAMNotFoundException : FATException 
@property (nonatomic, strong) NSString * identifier;
@property (nonatomic, strong) NSString * key;
@end

@interface EDAMInvalidContactsException : FATException 
@property (nonatomic, strong) NSArray * contacts;
@property (nonatomic, strong) NSString * parameter;
@property (nonatomic, strong) NSArray * reasons;
@end

@interface ErrorsConstants : NSObject 
@end
