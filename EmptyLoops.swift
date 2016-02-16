//
//  main.swift
//  EmptyLoops
//
//  Created by Sathya Rajaraman on 2/15/16.
//  Copyright © 2016 Sathyakumar. All rights reserved.
//

import Foundation

var a = 10
print("Empty Loops in Swift")
for k in 1...12 {
    let start = NSDate()
    for i in 0...a {
        
    }
    print("10^\(k) took \(NSDate().timeIntervalSinceDate(start)*1000) ms")
    a *= 10
}


