#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* insert(Node* head,int y)
{
    Node* newNode = new Node(y);
    if (!head) 
    {
        head = newNode;
    } 
    else 
    {
        Node* current = head;
        while (current->next) 
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return head;
}
void  printlist(Node* head)
{
    Node* curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void Ntnodelixt(Node* head,int y)
{
   int count=0;
    Node* curr=head;
    while(curr)
    {
        if(count==y)
        {
            cout<<curr->data<<" ";
        }
        curr=curr->next;
        count++;
    }
}
int main()
{
    Node* head=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int element;
        cin>>element;
        head=insert(head,element);
    }
    printlist(head);
    Ntnodelixt(head,2);
}