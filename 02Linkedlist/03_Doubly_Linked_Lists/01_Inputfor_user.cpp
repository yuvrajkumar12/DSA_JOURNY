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
    int n;//size of the doublyLinked_list
    cout<<"Enter your size of doubly linked List: ";
    cin>>n;
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
    printdoublylist(head);
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}