package main

import (
	"fmt"
	"strconv"
	"math/big"
)

func main() {
	x := new(big.Int).Exp(big.NewInt(2), big.NewInt(1000), nil)
	var n int64 = 0

	num := x.String()
	total := 0

	for len(num) > 0 {
		last := string(num[len(num)-1:])

		n, _ = strconv.ParseInt(last, 10, 0)
		total += int(n)

		num = num[0:len(num)-1]
	}

	fmt.Printf("eueler 16 solution: %d", total)
}