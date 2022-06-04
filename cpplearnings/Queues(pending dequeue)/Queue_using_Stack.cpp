#include <iostream>
#include <stack>
using namespace std;
class queue
{
private:
    stack<int> st1;
    stack<int> st2;

public:
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        if (st1.empty() && st2.empty())
        {
            cout << " queue is empty";
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }
    bool empty()
    {
        if (st1.empty() and st2.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    queue q;
    q.push(9);
    q.push(4);
    q.push(41);
    q.push(44);
    cout<<q.pop();
}