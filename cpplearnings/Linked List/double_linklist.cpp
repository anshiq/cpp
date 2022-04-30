#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
void PrintList(node *head)
{ // printing node.
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void add_at_head(node *&head, int value)
{
    node *n = new node;
    n->data = value;
    n->next = head;
    n->prev = NULL;
    head = n;
}
void Insert_anywhere(node *&head, int position, int value)
{
    node *temp = head;
    int count = 1;
    if (position == 1)
    {
        add_at_head(head, value);
        return;
    }
    while (temp != NULL && count < position)
    {
        count++;
        temp = temp->next;
    }
    node *n = new node;
    node *temp2;
    n->data = value;
    temp2 = temp->next;
    temp->next = n;
    n->next = temp2;
    n->prev = temp;
}
void add_at_tail(node *&head, int value)
{
    node *temp;
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    node *n = new node;
    n->data = value;
    temp->next = n;
    n->next = NULL;
    n->prev = temp;
}
void delete_node(node* &head, int position){
      node *temp = head;
    int count = 1;

     if(position ==1){
        temp = head ;
        head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && count < position)
    {
        count++;
        temp = temp->next;
    }
    temp->prev->next= temp->next;
    temp->next->prev=temp->prev;
   
    delete temp;
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
    head->next = second;
    head->prev = NULL;
    second->data = 2;
    second->next = third;
    second->prev = head;
    third->data = 4;
    third->next = forth;
    third->prev = second;
    forth->data = 6;
    forth->next = fifth;
    forth->prev = third;
    fifth->data = 8;
    fifth->next = sixth;
    fifth->prev = forth;
    sixth->data = 10;
    sixth->next = NULL;
    sixth->prev = fifth;
    int k = 2;
    Insert_anywhere(head, 5, 56);
   delete_node(head,1);
    PrintList(head);
}