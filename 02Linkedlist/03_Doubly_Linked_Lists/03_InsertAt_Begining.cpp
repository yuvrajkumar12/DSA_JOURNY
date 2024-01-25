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
void printOriginalList(Node *head)
{
    if(head==NULL)return;
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* AddAtbegining(Node *head,int a)
{
    Node *temp=new Node(a);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
    return temp;
}
void printAddAtbegining(Node *head )
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
    int n;//size of the doublyLinked_list
    cout<<"Enter your size of doubly linked List: ";
    cin>>n;
    int a1=45;
    if(n<=0)
    {
        cout<<"Invalid Input: ";
        return 1;
    }
    Node *head=new Node(0);
    Node *current=head;
    for(int i=0;i<n;i++)
    {
        int val;
        cout<<"Enter the value of the Node: "<<i+1<<": ";
        cin>>val;
        Node *newNode=new Node(val);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    printOriginalList(head->next);                 
    head=AddAtbegining(head->next,a1);
    cout<<endl;
    printAddAtbegining(head);
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}