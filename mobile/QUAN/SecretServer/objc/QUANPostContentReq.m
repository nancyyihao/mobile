// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.4.3 by WSRD Tencent.
// Generated from `SecretBase.jce'
// **********************************************************************

#import "QUANPostContentReq.h"

@implementation QUANPostContentReq

@synthesize JV2_PROP_NM(o,0,tUserId);
@synthesize JV2_PROP_NM(o,1,lSId);
@synthesize JV2_PROP_NM(o,2,lFirstId);
@synthesize JV2_PROP_NM(o,3,sContent);

+ (void)initialize
{
    if (self == [QUANPostContentReq class]) {
        [QUANUserId initialize];
        [super initialize];
    }
}

- (id)init
{
    if (self = [super init]) {
        JV2_PROP(sContent) = DefaultJceString;
    }
    return self;
}

- (void)dealloc
{
    JV2_PROP(tUserId) = nil;
    JV2_PROP(sContent) = nil;
    [super dealloc];
}

+ (NSString*)jceType
{
    return @"QUAN.PostContentReq";
}

@end