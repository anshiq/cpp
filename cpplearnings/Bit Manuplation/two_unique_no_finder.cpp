//We will xor all the numbers in array in(((1))). we will also get xor of both to unique numbers. Now we will check the first bit place in (((2))) matlab 
// sidha sa hi ki bache ge to sirf 2 unique no hi agar unka bhi kisi place pe bit 1 aya hi matlab ki kahi pe dono no ki bit 0 or 1 hi diff. hi
//
#include<iostream>
using namespace std;
int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
int uniquenumbers(int arr[], int n)
{
 int xorsum =0;
 for(int i =0; i<n ;i++){
     xorsum= xorsum^arr[i];        //((((1))))
 }
 int setbit =0; int pos =0; int tempxor =xorsum;
 while(setbit!=1){
     setbit =xorsum &1;       //(((2)))
     pos++;
     xorsum =xorsum>>1; // Right shifting the xorsum to get position of first bit
 }
 pos = pos -1; // there is 1 extra in last loop
 int newxor =0;
 for (int i=0;i<n;i++){
     if(setBit(arr[i],pos)){    // Seperation method to seperate the one of unique no. on the bases of bits.
        newxor = newxor^arr[i];
     }
 }
 cout<<newxor<<endl;
 cout<<(tempxor^newxor)<<endl;
}
int main()
{
        int arr[]={1,2,3,1,2,3,5,7};
        uniquenumbers(arr,8);  // 8 is size of array
}