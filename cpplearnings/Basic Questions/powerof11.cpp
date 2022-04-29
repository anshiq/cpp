#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float y=1;
    for(int i=1 ;i<=n;i++){
        y=y*1.1;
    }
    cout<<y;
}