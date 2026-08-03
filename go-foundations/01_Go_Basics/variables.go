// All variables must be used

/* Visibility:
		lower case first letter for package scope
		upper case first letter to export (globally)
		no private scope (however we can scope a variable within a block)
*/

/* Type Conversion
		destinationType(variable)
		use strconv package for strings
*/

package main

import (
	"fmt"
	"strconv"
)

var (
	actor string = "Jake"
	age int = 1
	Male bool = true
)

var a float32 = 2
// y := 2  When declaring at a package level, we can't declare a variable in this format.

func main() {
	var b int // Declaring a variable
	b = 3 // Initializing it

	var c int = 4 // Declaring and initializing

	d := 5. // This way the compiler automatically assigns the data type

	fmt.Printf("%v, %T\n", a, a)
	fmt.Printf("%v, %T\n", b, b)
	fmt.Printf("%v, %T\n", c, c)
	fmt.Printf("%v, %T\n\n", d, d)

	fmt.Printf("%v, %T\n", actor, actor)
	fmt.Printf("%v, %T\n", age, age)
	fmt.Printf("%v, %T\n\n", Male, Male)

	var e int = 6
	fmt.Printf("%v, %T\n", e, e)
	var f float32 = float32(e) // Explicit Conversion
	fmt.Printf("%v, %T\n\n", f, f)

	var g int = 63
	fmt.Printf("%v, %T\n", g, g)
	var h string = string(g) // Explicit Conversion
	fmt.Printf("%v, %T\n\n", h, h)

	var i int = 64
	fmt.Printf("%v, %T\n", i, i)
	var j string = strconv.Itoa(i) // Explicit Conversion
	fmt.Printf("%v, %T\n", j, j)
}