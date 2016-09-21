//
//  SignaturePlugin.h
//  Signature
//
//  Created by Gyorvari Gabor on 2015. 10. 06..
//  Copyright © 2015. Gyorvari Gabor. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SignaturePlugin : NSObject
+ (NSString *) extractEmailAddress:(NSString *)address;
@end

@interface SignaturePlugin (NoImplementation)
+ (id)sharedInstance;
@end
