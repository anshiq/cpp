#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main(){
  string a = "ansh";
  string b = "nahxa";
  int lb =0;
  if (a.length()!=b.length()){
    printf("no");
   return 0; 
  }
  for (int i =0; i<a.length(); i++) {
    for (int j =0;j<b.length();j++){
      if (a[i]==b[j]){
        lb++;
        a[i]= ']';
        b[j]='[';
      }
    } 
  }
  if (lb == a.length()){
    printf("yes ");
  }
  else{
    printf("no");
  }

   return 0; 
}
