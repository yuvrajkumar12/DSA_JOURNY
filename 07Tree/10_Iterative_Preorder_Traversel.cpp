#include<iostream>
#include<stack>
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
void IterativePreorder(node *root)
{
    stack<node *>s;
    node *curr=root;
    s.push(root);
    while(curr!=NULL || !s.empty())
    {
        node *curr=s.top();
        cout<<curr->key<<" ";
        s.pop();
        if(curr->right!=NULL) s.push(curr->right);
        if(curr->left!=NULL) s.push(curr->left);
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
    IterativePreorder(root);
    return 0;
}