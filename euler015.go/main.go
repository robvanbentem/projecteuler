package main

import (
	"fmt"
)

func main() {
    var grid [21][21]int

    for x := 0; x < 21; x++ {
        for y := 0; y < 21; y++ {
            if x == 0 || y == 0{
                grid[x][y] = 1
            } else {
                grid[x][y] = grid[x-1][y] + grid[x][y-1]
            }
        }
    }    

    fmt.Printf("euler 15 solution: %d", grid[20][20])
}
