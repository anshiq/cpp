#include<iostream>
using namespace std;
void incr(int n){
    if(n==1){
        cout<<"1"<<endl;     // Print inc order from a given no, starting from 1 , for better understansing it is 
        return;              // application of stack flow.
    }
    incr(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin >>n;
      incr(n);
}