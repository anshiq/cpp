#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restarray= sorted(arr+1,n-1);
    return (arr[0]<arr[1]&&restarray);
}
int main(){
      int array[]={1,2,3,4,5};
      cout<<sorted(array,5)<<endl;
}