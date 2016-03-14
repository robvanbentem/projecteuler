package main

import (
	"fmt"
	"bufio"
	"os"
	"math/big"
)

func main() {
	sum := big.NewInt(0)

	file, _ := os.Open("./nums.txt")
	defer file.Close()

	scnr := bufio.NewScanner(file)

	for scnr.Scan() {
		ln := big.NewInt(0)
		ln.SetString(scnr.Text(), 10)

		sum.Add(sum, ln)
	}

	fmt.Printf("euler 13 solution: %s", sum.String()[0:10])
}
