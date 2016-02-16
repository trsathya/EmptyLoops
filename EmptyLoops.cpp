//
//  main.cpp
//  EmptyLoops
//
//  Created by Sathya Rajaraman on 2/15/16.
//  Copyright © 2016 Sathyakumar. All rights reserved.
//

#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]) {
    long int a = 10;
    std::cout << "Empty Loops in C++" << std::endl;
    for (int i = 1; i <= 12; i++) {
        clock_t start = clock();
        for (long int j = 0; j < a; j++) {
            
        }
        clock_t duration = clock() - start;
        if (duration < 1000) {
            std::cout << "10^" << i << " took " << duration << " µs" << std::endl;
        } else if (duration < CLOCKS_PER_SEC) {
            std::cout << "10^" << i << " took " << duration / 1000 << " ms" << std::endl;
        } else if (duration < CLOCKS_PER_SEC * 60) {
            std::cout << "10^" << i << " took " << duration / CLOCKS_PER_SEC << " s" << std::endl;
        } else {
            clock_t minutes = duration / CLOCKS_PER_SEC * 60;
            clock_t seconds = (duration % CLOCKS_PER_SEC * 60) / CLOCKS_PER_SEC;
            std::cout << "10^" << i << " took " << minutes << " m" << seconds << " s" << std::endl;
        }
        a *= 10;
    }
    return 0;
}
