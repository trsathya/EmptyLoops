# EmptyLoops
Time taken for running 10^12 empty loops in c, c++, objc, swift and golang.

$ gcc EmptyLoops.c -o bin/c_output
$ ./bin/c_output
Empty Loops in C
10^1 took 3 µs
10^2 took 2 µs
10^3 took 4 µs
10^4 took 30 µs
10^5 took 282 µs
10^6 took 2 ms
10^7 took 29 ms
10^8 took 272 ms
10^9 took 2 s
10^10 took 3 s
10^11 took 3 s
10^12 took 1 µs 

$ g++ EmptyLoops.cpp -o bin/cpp_output                 
$ ./bin/cpp_output
Empty Loops in C++  
10^1 took 2 µs  
10^2 took 1 µs  
10^3 took 4 µs  
10^4 took 30 µs  
10^5 took 287 µs  
10^6 took 3 ms  
10^7 took 28 ms  
10^8 took 262 ms  
10^9 took 2 s  
10^10 took 25 s  
10^11 took 266s  
10^12 took too long (~ 44 mins)  

$ gcc -framework Foundation EmptyLoops.m -o bin/objc_output  
$ ./bin/objc_output
Empty Loops in objc
10^1 took 0.010014 ms
10^2 took 0.001073 ms
10^3 took 0.007033 ms
10^4 took 0.028014 ms
10^5 took 0.295997 ms
10^6 took 2.735019 ms
10^7 took 27.801037 ms
10^8 took 275.439978 ms
10^9 took 2792.832971 ms
10^10 took 3943.584085 ms
10^11 took 3342.676044 ms (incomplete)
10^12 took 0.000954 ms (incomplete)

$ xcrun --sdk macosx swiftc EmptyLoops.swift -o bin/swift_output  
$ ./bin/swift_output
Empty Loops in Swift  
10^1 took 0.775992870330811 ms  
10^2 took 0.00196695327758789 ms  
10^3 took 0.00596046447753906 ms  
10^4 took 0.0569820404052734 ms  
10^5 took 0.57297945022583 ms  
10^6 took 5.2180290222168 ms  
10^7 took 53.2169938087463 ms  
10^8 took 532.88996219635 ms  
10^9 took 5235.9179854393 ms  
10^10 took 53217.1320319176 ms  
10^11 took too long (~ 8mins)  
10^12 took too long (~ 88mins)  


$ go run EmptyLoops.go  
Empty Loops in golang  
10^1 took 169ns  
10^2 took 98ns  
10^3 took 491ns  
10^4 took 5.094µs  
10^5 took 49.121µs  
10^6 took 447.18µs  
10^7 took 4.134207ms  
10^8 took 42.060985ms  
10^9 took 400.944584ms  
10^10 took 3.780216997s  
10^11 took 38.901338915s  
10^12 took 6m32.164441829s   

$ javac EmptyLoops.java
$ java EmptyLoops
Empty Loops in java
10^1 took 0 s
10^2 took 0 s
10^3 took 0 s
10^4 took 0 s
10^5 took 0 s
10^6 took 0 s
10^7 took 0 s
10^8 took 0 s
10^9 took 0 s
10^10 took 0 s
10^11 took 0 s
10^12 took 0 s
