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
Node *insert(Node *head,int e)
{
    Node *temp=new Node(e);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;

    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }
}
void printlist1(Node *head)
{
    if(head==NULL) return;
    Node *p=head;
    do
    {
       cout<<p->data<<" ";
       p=p->next;
    }while(p!=head);
    cout<<endl;
    
}//Delete  head of circular linked list
Node *deletHeadOFlinked(Node *head)
{
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=head->next;
    delete head;
    return curr->next;
}
void printlist2(Node* head)
{
    if(head==NULL) return;
    Node *p=head;
    do
    {
       cout<<p->data<<" ";
       p=p->next;
    }while(p!=head);
    cout<<endl;
    
}
int main()
{
    Node *head=nullptr;
    int n;
    cout<<"Enter your element in circular linked list  ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        head=insert(head,element);
    }
    cout<<"print original circular linked List  ";
    printlist1(head);
    head=deletHeadOFlinked(head);//call delete head of linked list;
    cout<<"After delet head of linked list  ";
    printlist2(head);
    return 0;
}
