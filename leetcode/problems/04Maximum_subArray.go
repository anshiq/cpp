package main

import "fmt"

// most optimal
// func main() {
// 	arr := []int{1, 2, 3, -1}
// 	xx := maxSubArray(arr)
// 	fmt.Print(xx)

// }
//
//	func max(a int, b int) int {
//		if a > b {
//			return a
//		}
//		return b
//	}
//
//	func maxSubArray(nums []int) int {
//		running_sum := nums[0]
//		sum := nums[0]
//		for i := 1; i < len(nums); i++ {
//			running_sum = max(running_sum+nums[i], nums[i])
//			if running_sum > sum {
//				sum = running_sum
//			}
//			if running_sum < 0 {
//				running_sum = 0
//			}
//		}
//		return sum
//	}
//
// medium one  o(n*2) //complexity
// func maxi(first int, second int) int {
// 	return 3
// }
// func main() {

// 	arr := []int{1, 2, 3, -1}
// 	// fmt.Print(arr)
// 	max := -23948383
// 	for i := 0; i < len(arr); i++ {
// 		sum := 0
// 		for j := i; j < len(arr); j++ {
// 			sum += arr[j]
// 			max = maxi(sum, max)

// 		}
// 	}
// }

// worst one brootforce to divide into all subarrays
// func main() {

// 	arr := []int{1, 2, 3, -1}
// 	// fmt.Print(arr)
// 	for i := 0; i < len(arr); i++ {
// 		for j := i; j < len(arr); j++ {
// 			for k := i; k <= j; k++ {
// 				fmt.Print(arr[k], " ")
// 			}
// 			fmt.Println("")
// 		}
// 	}
// }
