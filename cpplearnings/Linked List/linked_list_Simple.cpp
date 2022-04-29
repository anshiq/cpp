#include <iostream>
using namespace std;
struct Node // creating basic node.
{
    int data;   // data to store in the node
    Node *next; // storing address of the next node.
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

int main()
{
      
    Node *head     =     new Node();               
    Node *second   =     new Node();             // allocating memory.
    Node *third    =     new Node();
    ///  location  of     // Node..


    // Asigning values of data in linked list and joining one node with another.
    // (*head).data = 34; OR
    head->data = 34; // assigned data
    // (*head).next= second OR
    head->next = second; // Linked head node with second node.

    second->data = 78;
    second->next = third;

    third->data = 100;
    third->next = NULL; // linked list ended;
    PrintList(head);
}