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

void Insert_At_End(Node **head, int value_at_end)
{
    // Steps to insert the node
    // 1. allocate the memory of last new node.
    Node *newNode = new Node();
    newNode->data = value_at_end;
    newNode->next = NULL; // this will be the future last node so last node always has null value.
    // Check If linked is empty or not from begining.
    if(*head == NULL){
        *head = newNode;
        return;
    }
    // If not empty then reach to the last node.
    Node* last = *head;
    while (last->next!=NULL)
    {
        last = last->next;
    }
    // finally reached last node now add new last node at the end.
    last->next = newNode;
    
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
    Insert_At_End(&head, -3);
    Insert_At_End(&head, 56);
    PrintList(head);
}