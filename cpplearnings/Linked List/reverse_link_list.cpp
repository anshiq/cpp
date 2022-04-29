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
// head contains no data only contains address of first node.

Node *prevpointer = NULL;
Node *nextpointer = NULL;
Node *currentpointer;
Node *reverselinkedlist(Node *&head)
{
    currentpointer = head; // current is starting point containg address of head.
    while (currentpointer != NULL)
    {                                       // explained everything on first triarsal of while loop for further try on notebook.
        nextpointer = currentpointer->next; // on first triversal nextptr will store address of next node of the start pointer.
        currentpointer->next = prevpointer; // current pointer is containing head changing it to previous null pointer.

        prevpointer = currentpointer;  // changing prevptr to current pointer.
        currentpointer = nextpointer;  // moving curntptr forward at position of nextptr& nextptr will move forward in next trivarsal.
    }
    return prevpointer; //for better understanding.
} //https://raw.githubusercontent.com/anshiq/extra/main/images/Screenshot%202022-04-16%20153601.png

int main()     // https://youtu.be/0gMRJAkbqyw for better understanding.
{

    Node *head = new Node();
    Node *second = new Node(); // allocating memory.
    Node *third = new Node();
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
    Node* newhead = reverselinkedlist(head);
    PrintList(newhead);
}