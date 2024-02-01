#include<iostream>
using namespace std;
struct node{
    int key;
    struct node *left;
    struct node *right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};

void Postorder(node *root)
{
    if(root!=NULL)
    {
        Postorder(root->right);
        Postorder(root->left);
        cout<<root->key<<" ";
    }
}
int main()
{
    node *root=new node(90);
    root->right=new node(30);
    root->left=new node(40);
    root->right=new node(50);
    root->right->right=new node(70);
    root->left->left=new node(80);
    Postorder(root);
    return 0;
}