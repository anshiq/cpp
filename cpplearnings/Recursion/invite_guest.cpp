
#include<iostream>
using namespace std;
int invite(int n){
    if(n<=1){   // invite only 1 or in pair of two
        return 1;
    }
    int way1=invite(n-1);  // single only 
    int way2=(n-1)*invite(n-2); //int pair of 2
    return way1 +way2;
}
int main(){
      int n =5;
      cout<<invite(n);
}