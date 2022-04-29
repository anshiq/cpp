#include<iostream>
using namespace std;
int countpathmaze(int n,int i,int j){
    if (i==n-1 && j==n-1){  // i=starting point // j== ending point in the maze
        return 1;           // https://raw.githubusercontent.com/Anshik-Singh/extra/main/images/Screenshot_20220328-214138_YouTube.jpg
    }
    if (i>=n || j>=n){
        return 0;
    }
     return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
}
int main(){
      cout<< countpathmaze(3,0,0);
}