#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void printdoublylist(Node *head)
{
    if(head==NULL)return;
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(15);
    Node *temp2=new Node(20);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printdoublylist(head);
}