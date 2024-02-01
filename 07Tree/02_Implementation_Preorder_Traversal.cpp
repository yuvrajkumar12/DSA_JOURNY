#include<iostream>
using namespace std;
struct node{
    int key;
    struct node *left;
    struct node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }1
};
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
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
    preorder(root);

    return 0;
}