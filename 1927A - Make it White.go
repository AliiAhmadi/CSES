package main

import "fmt"

func run() {
	var n int
	fmt.Scanf("%d\n", &n)

	var s string
	fmt.Scanf("%s\n", &s)

	start := 0
	end := 0

	for i := 0; i < len(s); i++ {
		if s[i] == 'B' {
			start = i
			break
		}
	}

	for i := len(s) - 1; i >= 0; i-- {
		if s[i] == 'B' {
			end = i
			break
		}
	}

	fmt.Println(end - start + 1)
}

func main() {
	var n int

	fmt.Scanf("%d\n", &n)

	for i := 0; i < n; i++ {
		run()
	}
}
