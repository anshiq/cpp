#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
bool checkPrime (int no){
 if (no ==0 || no ==1){
   return false;
 } 
 for (int i =2;i<=no/2;i++){
  if(no%i==0){
    return false;
  }
 }
 return true;
}
int main(){
  int a = 8;
  int sum =0;
 for (int i =0; i<=a ;i++){
   if (checkPrime(i)){
     sum = sum + i;
   }
 }
 std::cout << sum << std::endl;

}
