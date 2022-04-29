#include<iostream>
#include<string>

using namespace std;
int getbit(int n , int position){
return ((n&(1<<position ))!=0); 
/* n is the digit of which we have to find the bit and position is the place at which we have to find bit*/
}
int main(){              
   cout<<getbit(5,2);   
   /* get bit operator 
   lets say we have to find the bit on 2nd position of digit 5 */ 
    }