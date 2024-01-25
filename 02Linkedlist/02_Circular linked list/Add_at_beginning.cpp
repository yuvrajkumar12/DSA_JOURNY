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
//print circular linked list
void printlistf(Node *head)
{
    cout<<"Print original linked list"<<endl;
    Node *temp=head;
    while(temp!=NULL && temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}
//Insert at begining of the linked list 
//This code is implemented by naive Approach
//Time complicity of this code is Big o(n)
Node *insert2(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else{
        Node *curr=head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }  
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}
void printlist(Node *head)
{
    cout<<"After add print linked list"<<endl;
    Node *temp=head;
    while(temp!=NULL && temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;

}
//Efficient Approach Add at the begining of the linked list
/*Time complicity of the linked list is big o(1)*/
Node *insert3(Node *head,int y)
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
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
    
}
void printlistf1(Node *head)
{
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
int main()
{
    Node *head=new Node(3);
    head->next=new Node(5);
    head->next->next=new Node(10);
    head->next->next->next=head;//circular linked list 
    printlist(head);
    //insert the new Node of the circular linked Llist
    head=insert2(head ,25);
    printlist(head);
    head=insert3(head,235);
    printlistf1(head);
    return 0;
   
}