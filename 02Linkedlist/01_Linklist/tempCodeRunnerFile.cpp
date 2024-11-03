#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insert(node *head,int n){
    node *newnode=new node(n);
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
void Removeduplate(node *head){
   if(head==NULL||head->next==NULL){
    return;
   }

   node *curr=head;
   while(curr->next!=NULL){
    if(curr->data!=curr->next->data){
        curr=curr->next;
    }
    else{
        curr->next=curr->next->next;
    }
   }
}
void printlinkedlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num)
    {
        arr.push_back(num);
    }
    node *head=NULL;
    for(int i=0;i<arr.size();i++){
        int n=arr[i];
        head=insert(head,n);
    }
    
    Removeduplate(head);
    printlinkedlist(head);
    return 0;
}
