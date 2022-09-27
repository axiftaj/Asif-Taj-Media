#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "FLTFirebaseDatabaseObserveStreamHandler.h"
#import "FLTFirebaseDatabasePlugin.h"
#import "FLTFirebaseDatabaseUtils.h"

FOUNDATION_EXPORT double firebase_databaseVersionNumber;
FOUNDATION_EXPORT const unsigned char firebase_databaseVersionString[];

