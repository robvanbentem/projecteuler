package main

import "fmt"

var singles = [20]string{"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}
var doubles = [10]string{"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}

func main() {
    var tot = "onethousand"

    for q := 1; q < 1000; q++ {
        tot += speak(q, "")
    }

    fmt.Printf("Euler 17 solution: %d\n", len(tot))
}

func speak(n int, p string) string {
    var d, t int
    var r string = ""

    d = (n%100 - n%10) / 10
    t = (n - d - n%10) / 100

    if n == 0 {
        return ""
    } else if n < 20 {
        r = singles[n]
    } else if n < 100 {
        r = doubles[d] + speak(n%10, "")
    } else if n < 1000 {
        r = singles[t] + "hundred" + speak(n%100, "and")
    }

    return p + r
}
