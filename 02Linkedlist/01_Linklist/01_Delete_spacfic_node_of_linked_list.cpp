#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insert(node *head,int e){
    node *newnode=new node(e);
    node *curr=head;
    if(!head){
        head=newnode;
    }
    else{
        while(curr->next){
            curr=curr->next;
        }
        curr->next=newnode;
    }
    return head;
}
node *deletes(node *head,int Index)//without using exter pointer
{
    int c=0;
    node *curr1=head;
    while(curr1!=NULL&&c!=Index-1){
        curr1=curr1->next;
        c++;
    }
    node *temp=curr1->next;
    curr1->next=temp->next;
    delete temp;
    return head;    
}
node *deletu(node *head,int index){//using extera pointer
    node *curr2=head;
    node *prev=NULL;
    int coutn =0;
    while(curr2!=NULL&&coutn!=index){
        prev=curr2;
        curr2=curr2->next;
        coutn++;
    }
    prev->next=curr2->next;
    delete curr2;
    return head;
}
void printlist(node *head){
    node* curr=head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        head=insert(head,e);
    }
    printlist(head);
    deletes(head,3);
    printlist(head);
    deletu(head,2);
    printlist(head);
    return 0;
}