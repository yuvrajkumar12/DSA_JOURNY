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
void IterativeInorder(node *root)
{
    stack<node *>s;
    node *curr=root;
    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
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
    IterativeInorder(root);
    return 0;
}