#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  // int arr[c];
  int cthNum;
  int acount =1 ;int bcount = 1;
  for(int i =0; i < c;i++)
  {
    int anum = acount * a; 
    int bnum = bcount * b; 
    if(anum<bnum){
      //arr[i] = anum;
      cthNum = anum;
      acount++;
    }
    else if (anum == bnum){
      //arr[i] = anum;
      cthNum = bnum;
      acount++;
      bcount++;
    }
    else
    {  
      //arr[i] = bnum;
      cthNum = bnum;
      bcount++;
    }
  }
  if (cthNum % a ==0 && cthNum % b ==0){
    int max_num = max(a,b);
    while(1){
      if (max_num%a ==0 && max_num %b ==0){
        cout<< max_num;
        break;
      }
      max_num++;
    }
  }
  else if (cthNum % a ==0){
    cout<<a;
  }
  else{
    cout<<b;
  }
}
