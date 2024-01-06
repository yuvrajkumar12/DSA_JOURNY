#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
int printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
Node* insert(Node *head,int y)
{
    Node *temp=new Node(y);
    if(head==NULL)
    {
        return temp;
    }
    if(y<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL&&curr->next->data < y)
    {
        curr=curr->next;
    }
    temp->next = curr->next;
    curr->next=temp;
    return head;
}
int printlist1(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{  
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    head=insert(head,25);
    cout<<"Position of element in Linked List: " <<endl;
    printlist1(head);
    return 0;
}
