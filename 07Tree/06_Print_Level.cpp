#include<iostream>
#include<vector>
#include<queue>//include queue header file
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
void printlevel(node *root)//Level order traversal of a tree is breadth first traversal of binary tree.
{
    if(root==NULL) return;
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node *curr=q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);

    }
}
int main()
{
   node *root = new node(90);
    root->left = new node(40); 
    root->right = new node(30); 
    root->left->left = new node(80);
    root->right->right = new node(70);
    root->right->left = new node(50);
    printlevel(root);
    return 0;
}