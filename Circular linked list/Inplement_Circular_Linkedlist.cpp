#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void printlist(Node *head)
{
    Node* temp=head;
     while (temp != NULL && temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
    
}
// using for loop traversel circular Linked list
/*void print(Node *head)
{
    if(head==NULL) return ;
    cout<<head->data<<endl;
    for(Node *p=head->next; p!=head;p=p->next)
    cout<p->data;
}
*/
int main()
{
    Node *head=new Node(20);
    head->next=new Node(30);
    head->next->next=new Node(6);
    head->next->next->next=new Node(25);
    head->next->next->next->next=head;
    printlist(head);
    return 0;
}