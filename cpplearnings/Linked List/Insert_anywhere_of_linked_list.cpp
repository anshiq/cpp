#include <iostream>
using namespace std;
struct Node // creating basic node.
{
    int data;   // data to store
    Node *next; // location of new node.
};
// we need only head to print whole linked list.
void PrintList(Node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void InsertAfter(Node*previous, int  newvalue)
{
    // 1. Check if previous is empty or not
    if (previous == NULL)
    {
        cout << "Previous can not be NULL";
        return;
    }
    // 2. Prepare a newnode
    Node *newNode = new Node();
    newNode->data = newvalue;
    // 3. Insert newNode after the previous one.
    newNode->next=previous->next;
    previous->next=newNode;
}

int main()
{

    Node *head = new Node();
    Node *second = new Node(); // allocating memory.
    Node *third = new Node();
    // location of  // Node..

    // Asigning values of data in linked list and joining one node with another.
    // (*head).data = 34; OR
    head->data = 34; // assigned data
    // (*head).next= second OR
    head->next = second; // Linked head node with second node.

    second->data = 78;
    second->next = third;

    third->data = 100;
    third->next = NULL; // linked list ended;

    // placing two elements in front of head.
    InsertAfter(third, -3);
    InsertAfter(head, 56);
    PrintList(head);
}