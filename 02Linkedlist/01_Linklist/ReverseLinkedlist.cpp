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
    Node* temp=new Node(y);
    if(head==NULL||y<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL && y>curr->next->data)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printlist(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node *revList(Node *head){//using array
    vector<int> arr;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
Node *revers1(Node *head){//using Linked List
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL){
        Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
int main() {
    Node* head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        head = insert(head, element);
    }
    cout << "Original List: ";
    printlist(head);
    cout<<"Reverse2: ";
    head=revers1(head);
    printlist(head);
    head = revList(head);
    cout << "Reversed List: ";
    printlist(head);
   
}