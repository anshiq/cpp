#include <iostream>
using namespace std;
class Node // creating basic node.
{
public:
    int data;   // data to store
    Node *address_of_nextNode; // location of new node.
};
// we need only head to print whole linked list.
void PrintList(Node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->address_of_nextNode;
    }
}
void delition(Node *&head)
{
    Node *todelete = head; // to delete stores address of head
    head = head->address_of_nextNode;
    delete todelete; // delete todelete means deleted memory at address of head
}
void delition(Node *&head, int value)
{ // this works except head
    Node *temp = head;  // temp stores the address of head
    while (temp->address_of_nextNode->data != value)
    { // means (n-1)th data.
        temp = temp->address_of_nextNode;
    }
    Node *todelete = temp->address_of_nextNode;   // stored address to delete the unlinked node.
    temp->address_of_nextNode = temp->address_of_nextNode->address_of_nextNode; // breaked link and joined to another postion.
    delete todelete;
}

int main()
{

    Node *head = new Node();
    Node *second = new Node(); // allocating memory.
    Node *third = new Node();
    Node *forth = new Node();
    // location of  // Node..

    // Asigning values of data in linked list and joining one node with another.
    // (*head).data = 34; OR
    head->data = 34; // assigned data
    // (*head).next= second OR
    head->address_of_nextNode = second; // Linked head node with second node.

    second->data = 78;
    second->address_of_nextNode = third;

    third->data = 100;
    third->address_of_nextNode = forth; // linked list ended;

    forth->data = 120;
    forth->address_of_nextNode = NULL;

    delition(head, 100); // OR delition(head) to delete only head

    PrintList(head);
}