package main

import (
	"fmt"
	"os"
)

func main() {
	var a = 0
	var b = 0
	fmt.Println("Welcome to the calculator !")
	fmt.Println("Write the first number					:")
	fmt.Scan(&a)
	fmt.Println("Write the second number				:")
	fmt.Scan(&b)
	fmt.Println("Write the command or write 'help'				:")
	var command string
	fmt.Scan(&command)
	if command == "help" {
		fmt.Println("Print this help message")
		fmt.Println("+,-,*,/, exit, clear")
	}
	if command == "+" {
		fmt.Println(a + b)
	}
	if command == "-" {
		fmt.Println(a - b)
	}
	if command == "*" {
		fmt.Println(a * b)
	}
	if command == "/" {
		if b == 0 {
			fmt.Println("ERRROR!")
		} else {
			fmt.Println(a / b)
		}
		if a == 0 {
			fmt.Println("ERRROR!")
		} else {
			fmt.Println(a / b)
		}
	}
	if command == "clear" {
		fmt.Println("CLEAR")
		os.Exit(0)
	}
	if command == "exit" {
		fmt.Println("EXIT")
		os.Exit(0)
	}
}
