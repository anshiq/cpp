#include <iostream>
using   namespace std;
class Node{
  public:
    int data ;
    Node* next;
};

void printList(Node** head){
 (*(head))->data =9;
}
int main(){
 Node* head =new Node();
 Node* second =new Node();
 Node* third =new Node();
 head->data =4;
 head->next = second;
 second->data = 6;
 second->next = third;
 third->data = 8;
 third->next = NULL;
 printList(&head);
 cout<<head->data;
}
