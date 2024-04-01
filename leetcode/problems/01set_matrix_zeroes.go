// package main

// import "fmt"

// func convertCol(col int, lenth int) {
// 	fmt.Println(col, lenth)

// }
// func convertRow(row int, lenth int) {
// 	fmt.Println(row, lenth)

// }
// func main() {
// 	matrix := [][]int{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}
// 	var db [][]int
// 	// matrixans := [][]int{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}
// 	for rowIndex, numberarr := range matrix {
// 		for colIndex, numbercol := range numberarr {
// 			if numbercol == 0 {
// 				db = append(db, []int{rowIndex, colIndex})
// 			}
// 		}
// 	}
// 	for _, numberarr := range db {
// 		row := numberarr[0]
// 		col := numberarr[1]

// 		for x := 0; x < len(matrix); x++ {
// 			matrix[x][col] = 0
// 		}
// 		for x := 0; x < len(matrix[0]); x++ {
// 			matrix[row][x] = 0
// 		}
// 	}
// 	fmt.Print(matrix)

// }
