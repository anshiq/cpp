#include <iostream>

using namespace std;
int reverser(int n){
   int temp =n;
   	int newdigit = 0;
   while(temp>0){
        int last = temp%10;
		temp = temp/10;
	          newdigit = newdigit*10 + last;

   }
  
   return newdigit;


}
int main()
{
	int n;
	cin>>n;

	cout<<reverser(n);
}
