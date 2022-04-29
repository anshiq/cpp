#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *address_to_nextNode;
};
void PrintList(node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->address_to_nextNode;
    }
    cout << endl;
}

void reverse(node *&head)
{
    node *temp ;
    node *start = head;
    node *prev = NULL;
    while (start != NULL) // OR can say (temp!=NULL)
    {
       temp = start->address_to_nextNode;
       start->address_to_nextNode = prev;
       prev = start;
       start= temp;
    }  head = prev;
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *forth = new node();
    node *fifth = new node();
    node *sixth = new node();
    head->data = 0;
    head->address_to_nextNode = second;
    second->data = 2;
    second->address_to_nextNode = third;
    third->data = 4;
    third->address_to_nextNode = forth;
    forth->data = 6;
    forth->address_to_nextNode = fifth;
    fifth->data = 8;
    fifth->address_to_nextNode = sixth;
    sixth->data = 10;
    sixth->address_to_nextNode = NULL;
    PrintList(head);
     reverse(head);
    PrintList(head);
}