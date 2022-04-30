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

node *reverse_kNodes(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->address_to_nextNode;
        currptr->address_to_nextNode = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
      head->address_to_nextNode =  reverse_kNodes(nextptr, k);
    }
    return prevptr;
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
    int k=2;
    node* newhead = reverse_kNodes(head,k);
    PrintList(newhead);
}