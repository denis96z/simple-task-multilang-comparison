package main

import (
	"fmt"
	"os"
	"strconv"
)

func main() {
	if len(os.Args) != 2 {
		_, _ = fmt.Fprintln(os.Stderr, "USAGE proj-1 number")
		os.Exit(1)
	}

	n, err := strconv.ParseInt(os.Args[1], 10, 32)
	if err != nil {
		panic(err)
	}

	var i int32
	for i = 0; i < int32(n); i++ {
		s := fmt.Sprintf("STRING #%d", i)
		fmt.Println(s)
	}
}
