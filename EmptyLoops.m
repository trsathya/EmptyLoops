//
//  main.m
//  EmptyLoops
//
//  Created by Sathya Rajaraman on 2/15/16.
//  Copyright © 2016 Sathyakumar. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int a = 10;
        NSLog(@"Empty Loops in objc");
        for (int i = 1; i <= 12; i++) {
            NSDate *start = [NSDate date];
            for (int j = 0; j < a; j++) {
                
            }
            NSLog(@"10^%d took %f ms", i, [[NSDate date] timeIntervalSinceDate:start]*1000);
            a *= 10;
        }
    }
    return 0;
}


