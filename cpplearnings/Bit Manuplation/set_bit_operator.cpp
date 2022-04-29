#include<iostream>
using namespace std;
int setbit(int n, int position){
    /* n is the given number and position is the place at which we have
    to set the bit */
    return(n | (1<<position));
}
int main(){
    cout << setbit(5,1);
    /* set bit operator set a  bit at a fixed given position of a number
    */
}