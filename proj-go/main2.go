package main

import (
	"fmt"
	"os"
	"reflect"
	"strconv"
	"unsafe"
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

	const prefix = "STRING #"

	b := &Buffer{
		i: len(prefix),
		b: make([]byte, len(prefix), len(prefix)+len("-2147483648")),
	}

	var i int32
	copy(b.b, prefix)
	for i = 0; i < int32(n); i++ {
		_, _ = fmt.Fprintf(b, "%d", i)
		s := b.String()

		fmt.Println(s)
	}
}

type Buffer struct {
	i int
	b []byte
}

func (b *Buffer) Write(p []byte) (n int, err error) {
	n, b.b = len(p), b.b[:b.i]
	_ = append(b.b[b.i:], p...)
	b.b = b.b[:b.i+n]
	return n, nil
}

func (b *Buffer) String() string {
	bh := (*reflect.SliceHeader)(unsafe.Pointer(&b.b))
	sh := reflect.StringHeader{Data: bh.Data, Len: bh.Len}
	return *(*string)(unsafe.Pointer(&sh))
}
