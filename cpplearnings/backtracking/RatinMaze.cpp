#include <iostream>
using namespace std;
bool safepoints(int **arr, int x, int y, int n) {
  if (x < n && y < n &&
      arr[x][y] == 1) { // defferentiate  between the obstracles and given free
                        // of obstracle path.
    return true;
  }
  return false;
}
bool RatinMaze(int **arr, int x, int y, int n, int **SolutionArr) {
  if ((x == n - 1) && (y == n - 1)) {
    SolutionArr[x][y] = 1; /// if rat has been reached.
    return true;
  }

  if (safepoints(arr, x, y, n)) {
    SolutionArr[x][y] = 1; // indicates that this can be a path   if it will not
                           // we will backtrack and assign this the value =0;
    if (RatinMaze(arr, x + 1, y, n, SolutionArr)) {
      return true; //   checking the future in the rows
    }
    if (RatinMaze(arr, x, y + 1, n, SolutionArr)) {
      return true; // checking the future in the columns
    }
    SolutionArr[x][y] =
        0; // backtrackpoint    indicated path future me ja k fail ho gya.
    return false;
  }
  return false; // all over backtrack agar kuch bhi success full na rha is liye.
}
int main() {
  int n;
  cin >> n;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int **SolutionArr = new int *[n];
  for (int i = 0; i < n; i++) {
    SolutionArr[i] = new int[n];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      SolutionArr[i][j] = 0;
    }
  }

  if (RatinMaze(arr, 0, 0, n, SolutionArr)) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << SolutionArr[i][j] << " ";
      }
      cout << endl;
    }
  }
}
