#include<iostream>
using namespace std;
int  sort(int array[],int n,int k){
    if(k==n-1){
        return true;
    }
        if(array[k]<=array[k+1]){
            return sort(array,n,k+1);
        }
        else if(array[k]>array[k+1]){ 
            return false;
        }
        
}

int main(){
      int array[]={1,2,3,4,5,6,7};
      cout<<sort(array,7,0)<<endl;
}