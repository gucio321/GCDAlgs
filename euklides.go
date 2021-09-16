package main

import "fmt"

func GCD(a, b int) int {
	for a != b {
		switch {
		case a > b:
			a -= b
		case b > a:
			b -= a
		}
	}

	return a
}

func main() {
	var a, b int
	fmt.Print("Podaj a: ")
	fmt.Scanln(&a)
	fmt.Print("Podaj b: ")
	fmt.Scanln(&b)
	gcd := GCD(a, b)
	fmt.Printf("GCD of numbers %d and %d is equal to %d\n", a, b, gcd)
}
