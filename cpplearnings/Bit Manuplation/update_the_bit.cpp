#include<iostream>
using namespace std;
int update_the_bit(int n, int position, int value){
    int mask = ~(1<<position); // value is bit with which it will be updated
    return n | (value<<position);
}
int main(){
    cout<< update_the_bit(5,1,1);
}