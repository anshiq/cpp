// package main

// import "fmt"

// func pascal(num int, pro *int, arr *[][]int) {
// 	if *pro == num {
// 		return
// 	}
// 	var temp []int
// 	if *pro != 0 {
// 		temp = append(temp, 1)
// 	} //filling boundries of triangle
// 	lastElementTopluseIndex := *pro - 1
// 	for x := 1; x <= *pro-1; x++ {
// 		temp = append(temp, (*arr)[lastElementTopluseIndex][x-1]+(*arr)[lastElementTopluseIndex][x])
// 	}
// 	temp = append(temp, 1)
// 	//filling boundries of triangle
// 	*arr = append((*arr), temp)
// 	*pro = *pro + 1
// 	pascal(num, pro, arr)

// }
// func main() {
// 	var numArr [][]int
// 	n := 5
// 	s := 0
// 	pascal(n, &s, &numArr)
// 	fmt.Print(numArr)
// }
