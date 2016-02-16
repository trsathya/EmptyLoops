package main

import (
	"fmt"
	"time"
)

func main() {

	a := 10
	fmt.Println("Empty Loops in golang")
	for k := 1; k < 13; k++ {
		ta := time.Now()
		for i := 0; i < a; i++ {
		}
		fmt.Printf("10^%d took %v\n", k, time.Since(ta))
		a *= 10
	}
}
