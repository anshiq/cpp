
#include<iostream>
#include<cmath>
using namespace std;

int maxteller(int n, int array[]){
    int maxi= -11999999;
    for(int i=0;i<n;i++){
        
       maxi =max(maxi,array[i]);
         

    }

return maxi; 
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

cout<<maxteller(n,array);



return 0;
}
