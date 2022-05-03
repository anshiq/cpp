#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
void PrintList(Node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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
Node* merge_list(Node* &head , Node* &head1){
    Node* dummynode = new Node();
    Node* newhead = dummynode;
    Node* p1 = head ;
    Node* p2 = head1;

     while(p1!=NULL && p2!= NULL){
         if(p1->data > p2->data ){
             newhead->next = p2;
             newhead=newhead->next;
             p2=p2->next;
         }
         else{
            newhead->next = p1;
            newhead = newhead->next;
            p1 =p1->next;
         }

     }
     while(p1!= NULL){
         newhead->next = p1;
        p1 = p1->next;
         newhead=newhead->next;
     }
       while(p2!= NULL){
         newhead->next = p2;
         p2 = p2->next;
         newhead=newhead->next;
     }
     return dummynode->next;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *forth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    Node *seventh = new Node();
    int arr[] = {1, 2, 3, 9};
    Node *head1 = NULL;
    head->data = 0;
    head->next = second;
    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = forth;

    forth->data = 6;
    forth->next = fifth;

    fifth->data = 8;
    fifth->next = sixth;

    sixth->data = 10;
    sixth->next = seventh;
    
    seventh->data = 123;
    seventh->next= NULL;


    for (int i = 0; i < 4; i++)
    {

        Insert_At_End(&head1, arr[i]);
    }
  Node* newhead =  merge_list(head,head1);
    PrintList(head1);
}