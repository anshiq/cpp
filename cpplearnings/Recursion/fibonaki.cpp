#include<iostream>
using namespace std;
int fibonaki(int n){
    if (n==0 || n==1){    // Find the nth fibonaki no.   1,2,3,5,8,13,21 etc
        return n;
    }
    return fibonaki(n-1) + fibonaki(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonaki(n);
    return 0;
}