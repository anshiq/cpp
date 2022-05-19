#include <iostream>
#include <math.h> // for exponential operations
#include <stack>  // inbuild stack 😌
using namespace std;
int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i =0; i <s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {                        // storing the digits present in equation
            st.push(s[i] - '0'); // -'0' is used to convert char data type to int data type. Only char to int bro remember.
        }                        // if statment is gona push digits in the stack, whenever arithmatic operator will come it will go to else statement.
        else
        {
            int op2 = st.top(); // storing digits  present just adjacent of an arithmatic operator in equation.
            st.pop();
            int op1 = st.top(); // storing digits  present just adjacent of an arithmatic operator in equation.
            st.pop();
            // else statment is gona store most above two digits on each arithmatic operator. and send them to switch statement.
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;

            case '*':
                st.push(op1 * op2);
                break;

            case '-':
                st.push(op1 - op2);
                break;

            case '/':
                st.push(op1 / op2);
                break;

          
            }
        }
       
    }
     return st.top();
}
    int main()
    {
        cout<<prefixEvaluation("46+2/5*7+");
    }