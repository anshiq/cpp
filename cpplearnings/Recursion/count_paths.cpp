#include<iostream>
using namespace std;
int countpath(int start,int end){
    if(start==end){
        return 1;
    }
    if(start>end){
        return 0;
    }
    int count =0; 
    for (int i =1;i<=6;i++){
        count += countpath(start+i,end);
    }
    return count;
}
int main(){
       cout<<countpath(0,3)<<endl;

}