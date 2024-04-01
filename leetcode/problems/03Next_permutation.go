// package main

// import "fmt"

// func sort(start int, end int, arr *[]int) *[]int {

// 	for x := start; x < end; x++ {
// 		temp := (*arr)[x]
// 		(*arr)[x] = (*arr)[end]
// 		(*arr)[end] = temp
// 		end--
// 	}
// 	return arr
// }

// func main() {
// 	// arr := []int{2, 1, 5, 4, 3, 0, 0}
// 	arr := []int{3, 2, 1}
// 	isLargest := false
// 	var accendingBreakerIndex int // 1 in this case 2nd element
// 	for x := len(arr) - 1; x > 0; x-- {
// 		if arr[x-1] < arr[x] {
// 			accendingBreakerIndex = x - 1
// 			break
// 		}
// 		if x-1 == 0 {
// 			isLargest = true
// 		}

// 	}
// 	if !isLargest {

// 		var indexOfelementGreaterThanAccendingBreaker int // but from last in smalling list
// 		for x := len(arr) - 1; x > 0; x-- {
// 			if arr[x] > arr[accendingBreakerIndex] {
// 				indexOfelementGreaterThanAccendingBreaker = x
// 				break
// 			}
// 		}
// 		// fmt.Print(accendingBreakerIndex, indexOfelementGreaterThanAccendingBreaker)
// 		//swapping the elements
// 		temp := arr[accendingBreakerIndex]
// 		arr[accendingBreakerIndex] = arr[indexOfelementGreaterThanAccendingBreaker]
// 		arr[indexOfelementGreaterThanAccendingBreaker] = temp
// 		// fmt.Print(arr)
// 		// swap to make it smallest
// 		end := len(arr) - 1
// 		start := accendingBreakerIndex + 1
// 		sort(start, end, &arr)
// 		fmt.Print(arr)
// 		return
// 	}
// 	// fmt.Print("largest found no larger next permutation")
// 	sort(0, len(arr)-1, &arr)
// 	fmt.Print(arr)

// }
