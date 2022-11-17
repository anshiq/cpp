
/* 
Input Format

You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format

For each integer n in the inclusive interval [a,b]:

If , then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.

Else if n>9 and it is an even number, then print "even".

Else if n>9 and it is an odd number, then print "odd".



Note: 

**********
Sample Input

8
11
Sample Output

eight
nine
even
odd
***********
*/


#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
  
    cin >> b;
    while (a <= b)
    {
        if (a <= 9 && a >= 1)
        {
          for(a;a<=9 && a<=b;a++){
                if (a == 1)
                {
                    cout << "one"<<"\n";
                }
                if (a == 2)
                {
                    cout << "two"<<"\n";
                }
                if (a == 3)
                {
                    cout << "three"<<"\n";
                }
                if (a == 4)
                {
                    cout << "four"<<"\n";
                }
                if (a == 5)
                {
                    cout << "five"<<"\n";
                }
                if (a == 6)
                {
                    cout << "six"<<"\n";
                }
                if (a == 7)
                {
                    cout << "seven"<<"\n";
                }
                if (a == 8)
                {
                    cout << "eight"<<"\n";
                }
                if (a == 9)
                {
                    cout << "nine"<<"\n";
                }
            }
        }
        else if(a%2==0){
            cout<<"even"<<"\n";
            a++;
        }
        else if(a%2 !=0){
            cout<<"odd"<<"\n";
            a++;
        }
    }
}
