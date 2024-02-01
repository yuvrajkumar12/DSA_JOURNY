#include<iostream>
using namespace std;
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void printTree(Node *root,int lev=0)
 {
    if(root!=NULL)
    {
        printTree(root->left,lev+1);
        for(int i=0;i<lev;i++)
        {
             cout<<"  ";
        }
       cout<<root->key<<" ";
        printTree(root->right,lev+1);
    }
    
 }
 void printkDistance(Node *root , int k)
 {
    if(root==NULL) return;
    if(k==0)
    {
        cout<<root->key<<" ";
    }
    else{
        printkDistance(root->left,k-1);
        printkDistance(root->right,k-1);
    }
 }
int main()
{
    Node *root=new Node(90);
    root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(70);
	root->right->right->right=new Node(80);
    cout<<"print Tree: ";
    printTree(root);
    cout<<endl;
    cout<<"print k distanc:  ";
    int k1=2;
    printkDistance(root,k1);
    return 0;
}