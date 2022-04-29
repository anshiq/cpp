#include <iostream>
using namespace std;
int clear_bit(int n , int position){
           int mask = ~(1<<position);
           return (n & mask);
}
int main(){
    cout<<clear_bit(5,2);
}