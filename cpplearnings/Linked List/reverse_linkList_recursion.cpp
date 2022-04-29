#include <iostream>
using namespace std;
class Node // creating basic node.
{
public:
    int data;   // data to store in the node
    Node *next; // storing address of the next node.
};
void PrintList(Node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* reverse_list(Node* &head){
    if(head->next==NULL || head==NULL){
        return head ;
    }
  Node*newhead = reverse_list(head->next);  // work of newhead is only like I++ in loop. It tells position of new head.
  head->next->next =head;  //  reversed to pointer of nodes. write on copy for better understanding.
  
  head->next =NULL;  // breaked old connection.
  return newhead;     // head of new link list will always remain same.

}

int main()
{

    Node *head = new Node();
    Node *second = new Node(); // allocating memory.
    Node *third = new Node();
    Node *forth = new Node();
    Node *fifth = new Node();
    ///  location  of     // Node..

    // Asigning values of data in linked list and joining one node with another.
    // (*head).data = 34; OR
    head->data = 34; // assigned data
    // (*head).next= second OR
    head->next = second; // Linked head node with second node.

    second->data = 78;
    second->next = third;

    third->data = 100;
    third->next = forth;

    forth->data =88;
    forth->next=fifth;
    fifth->data=76;
    fifth->next=NULL;
    
     // linked list ended;
   Node* k = reverse_list(head);
    PrintList(k);
    
   
}