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
int getsize(node *root)
{
    if(root==NULL)
        return 0;
    return 1+(getsize(root->left)+ getsize(root->right));//Using Recursion
}
int main()
{
    node *root = new node(90);
    root->left = new node(40); 
    root->right = new node(30); 
    root->left->left = new node(80);
    root->right->right = new node(70);
    root->right->left = new node(50);
    cout<<"Size of Binary_Tree:  "<<getsize(root);
    return 0;
}