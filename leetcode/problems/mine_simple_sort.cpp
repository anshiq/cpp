#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main ()
{
  int a[] = {8,1,2,1,3,4,7,5,6,7};
  for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
    for(int j =0; j<i;j++){
      if(a[i]<a[j] && i!=j){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i =0;i<sizeof(a)/sizeof(a[0]);i++){
    cout<<a[i];
  }
  return 0;
}
