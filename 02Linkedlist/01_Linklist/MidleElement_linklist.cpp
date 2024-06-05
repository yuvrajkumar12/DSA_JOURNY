#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }

};
Node* insert(Node* head, int y)
{
    Node* new_node=new Node(y);
    Node* curr=head;
    if(!head)
    {
        head=new_node;
    }
    else{
        while(curr->next)
        {
            curr=curr->next;
        }
        curr->next=new_node;
    }
    return head;
}   
void printlist(Node* head)
{
    Node* curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void midle(Node* head)
{
    Node* curr=head;
    int count=0;
    int c1=0;
    while(curr!=NULL)
    {
        count+=1;
        curr=curr->next;
    }
    cout<<count<<endl;
    Node* curr1=head;
    while(curr1)
    {
        if(c1==count/2)
        {
            cout<<curr1->data<<endl;
        }
        curr1=curr1->next;
        c1++; 
    }
}
//Second method to find the midle element using two pointer;
void midle2(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
    
}
int main()
{
    Node* head=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        head=insert(head,element);
    }
    printlist(head);
    midle(head);
    midle2(head);
}