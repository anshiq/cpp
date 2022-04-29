#include<iostream>   //Tower of Hanoi
using namespace std;
void tower_of_hanoi(int n,char source, char destination,char helper){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,source,helper,destination);
    cout<<"move from "<<source<<" to "<<destination<<endl;
    tower_of_hanoi(n-1,helper,destination,source);
}
int main(){
      tower_of_hanoi(3,'a','c','b');
}