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
void printlist(Node *head)
{
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int search(Node *head,int x)
{
    int pos=1;
    Node *crr=head;
    while(crr!=NULL){
        if(crr->data==x)
            return pos;
        else{
            pos++;
            crr=crr->next;
        }
    }
    return -1;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    cout<<"Position of element in Linked List: " <<search(head,20);
    return 0;
}