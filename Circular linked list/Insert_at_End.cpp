#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
//print original circular Linked List;
void PLinkedlist(Node* head)
{
   Node *temp=head;
   while(temp!=NULL&&temp->next!=head)
   {
        cout<<temp->data<<" ";
        temp=temp->next;
   }
   cout<<temp->data<<endl;
}//NAIVE Approct the time complicity id BIG o(n)
Node *Insert_At_End(Node* head,int y)
{
    Node *temp=new Node(y);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->next=head;
    return head;
}
void PrintList(Node* head)
{
    if(head==NULL)
    return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    cout<<endl;
}//efficiency approach big o(1)
Node* insert1(Node* head,int y)
{
    Node *temp=new Node(y);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int y=temp->data;
        temp->data=head->data;
        head->data=y;
        return temp;
    }

}//print after new node 
void print2(Node *head)
{
    if(head==NULL)return;
    Node* p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
int main()
{
    Node *head=new Node(14);
    head->next=new Node(15);
    head->next->next=new Node(23);
    head->next->next->next=head;
    PLinkedlist(head);
    head=Insert_At_End(head,25);//Add the element of the end
    PrintList(head);
    head=insert1(head,56);
    print2(head);
    return 0;
}