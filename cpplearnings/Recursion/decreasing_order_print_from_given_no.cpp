#include<iostream>
using namespace std;
void dec(int n){      //  print decresing order from a given no till 0.
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
} 
int main(){
      int n;
      cin>>n;
      dec(n);
}