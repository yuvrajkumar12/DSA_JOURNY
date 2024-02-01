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
    }

};
void Inorder(node *root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
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
    Inorder(root);
    return 0;
}