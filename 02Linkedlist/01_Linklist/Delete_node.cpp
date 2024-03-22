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
node *insert(node* head,int el){
    node *new1=new node(el);
    if(!head){
        head=new1;
    }
    else{
        node *curr1=head;
        while(curr1->next){
            curr1=curr1->next;
        }
        curr1->next=new1;
    }
    return head;
}
node *delet(node *head){
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    node *temp=curr->next;
    delete temp;
    return head;
}
void *printlist(node *head){
    node *curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int el;
        cin>>el;
        head=insert(head,el);
    }
    printlist(head);
    delet(head);
}