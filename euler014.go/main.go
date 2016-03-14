package main

import (
	"fmt"
)

func main() {
    max := 0
    max_chain := 0
    cur := 1000000

    for cur > 0 {
        tmp := cur
        chain := 0


        for tmp > 1 {
            if tmp % 2 == 0 {
                tmp = tmp / 2
            } else {
                tmp = 3 * tmp + 1
            }

            chain++
        }

        if chain > max_chain {
            max = cur
            max_chain = chain
        }


        cur -= 1
    }

    fmt.Printf("euler 14 solution: %d", max)
}

