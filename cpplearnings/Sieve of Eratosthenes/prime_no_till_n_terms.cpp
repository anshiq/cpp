
#include <iostream>
using namespace std;
void primeno(int n){
    int prime[n+1]={0};     //url fdor explanation https://www.geeksforgeeks.org/sieve-of-eratosthenes/     
                            //  https://www.youtube.com/watch?v=nDPo9hsDNvU&t=330s
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for (int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for (int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}

int main() {

int n;
cin>>n;
primeno(n);
    return 0;
}