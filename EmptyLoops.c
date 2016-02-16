//
//  main.c
//  EmptyLoops
//
//  Created by Sathya Rajaraman on 2/15/16.
//  Copyright © 2016 Sathyakumar. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int a = 10;
    printf("Empty Loops in C\n");
    for (int i = 1; i <= 12; i++) {
        clock_t start = clock();
        for (int j = 0; j < a; j++) {
            
        }
        clock_t duration = clock() - start;
        if (duration < 1000) {
            printf("10^%d took %ld µs\n", i, duration);
        } else if (duration < CLOCKS_PER_SEC) {
            printf("10^%d took %ld ms\n", i, duration/1000 );
        } else if (duration < CLOCKS_PER_SEC * 60) {
            printf("10^%d took %ld s\n", i, duration/CLOCKS_PER_SEC);
        } else {
            clock_t minutes = duration / CLOCKS_PER_SEC * 60;
            clock_t seconds = (duration % CLOCKS_PER_SEC * 60) / CLOCKS_PER_SEC;
            printf("10^%d took %ld m %ld s\n", i, minutes, seconds);
        }
        a *= 10;
    }
    return 0;
}
