#include<iostream>
using namespace std;
int main(){
  int t;
  cin>> t;
  cin.ignore(); // by default cin consider enter as also a valid value so to ignore it.
  while(t--){ // to take multiple line inputs from user 
    string s;
    getline(cin,s); // function to take line input 
    cout<<s<<endl;
  }
}
