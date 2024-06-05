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
void printlist(node *head){
    int c=0;
    node *curr=head;
    while(head!=NULL)
    {
        head=head->next;
        c++;
    }
    for(int i=0;i<c/2;i++){
        curr=curr->next;
    } 
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }      
    
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
    return 0;
}