
#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    int no_of_divisible_by_a = n/a;
     int no_of_divisible_by_b = n/b;
      int no_of_divisible_by_both = n/(a*b);
      return  no_of_divisible_by_a + no_of_divisible_by_b - no_of_divisible_by_both;
}
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
}