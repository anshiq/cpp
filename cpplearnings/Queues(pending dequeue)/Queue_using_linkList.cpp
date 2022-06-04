#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
       back->next = n;
        back = n; // changing 2nd pointer with newly added element in queue.
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << " queue is empty";
            return;
        }
        node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << " queue is empty";
            return 0;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
        {
            cout << " queue is empty";
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.pop(); cout<<"\n";
    q.push(9);
    q.push(8);
    q.push(7);
    q.push(95);
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek();
}