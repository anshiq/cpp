#include <iostream>
using namespace std;
struct Node // creating basic node.
{
    int data; // data to store
    Node *next;  // location of new node.
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

void Insert_At_front(Node **head, int value_at_head)
{
    // Steps to insert the node
    // 1. allocate the memory of the new inserting node.
    Node *newNode = new Node();
    newNode->data = value_at_head;
    // 2. Put it in front of the current head
    newNode->next= *head; // assigned address of head
    // 3. replace of linked list  samay raja ko bhikari bna sakta hi babu bhaiya.
    *head = newNode;  
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
    Insert_At_front(&head, -3);
    Insert_At_front(&head, 56);
    PrintList(head);
}