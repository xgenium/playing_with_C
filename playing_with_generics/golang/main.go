package main

import "fmt"

func foo[T any](x T) {
	fmt.Println(x)
}

func main() {
	foo(10)
	foo(12.52)
}
