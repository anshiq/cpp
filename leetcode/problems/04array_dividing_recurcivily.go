// package main

// import (
// 	"fmt"
// )

// func getSubarrays(index int, originalArray *[]int, subArrayContainer *[][]int) {
// 	if index == len(*originalArray) {
// 		fmt.Print("done")
// 		return
// 	}
// 	for x := index; x < len(*originalArray); x++ {
// 		var temp []int
// 		for y := index; y <= x; y++ {
// 			temp = append(temp, (*originalArray)[y])
// 		}
// 		(*subArrayContainer) = append((*subArrayContainer), temp)
// 	}
// 	getSubarrays(index+1, originalArray, subArrayContainer)

// }

// func main() {
// 	arr := []int{1, 2, 3}
// 	var container [][]int
// 	getSubarrays(0, &arr, &container)
// 	fmt.Print(container)

// }
