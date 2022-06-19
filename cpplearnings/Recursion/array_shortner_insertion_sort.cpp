#include <iostream>
using namespace std;
void shoted(int narry[], int n, int k)
{
      if (n == k)
      {
            for (int i = 0; i < n; i++)
            {
                  cout << narry[i];
            };
            return;
      }

      if (narry[k] > narry[k + 1])
      {
            int temp = narry[k];
            narry[k] = narry[k + 1];
            narry[k + 1] = temp;
            //if (k != 0)
          //  {
                  k = k - 1;
          //  }
            shoted(narry, n, k);
      }
      else if (narry[k] <= narry[k + 1])
      {
            shoted(narry, n, k + 1);
      }
}
int main()
{
      int array[] = {9, 0, 3, 9, 6, 2, 7, 4, 8};
      shoted(array, 9, 0);
}