#include<iostream>
#include<stack>
using namespace std;
struct node{
    int key;
    struct node  *left;
    struct node *right;
    node(int k)
    {
        key=k;
        left=right=NULL;
    }
};
void IterativePreorder(node *root)
{
    stack<node*>st;
    node *curr=root;
    while(curr!=NULL|| st.empty()==false)
    {
        while(curr!=NULL)
        {
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
                st.push(curr->right);
            curr=curr->left;
        }
        if(st.empty()==false)
        {
            curr=st.top(),st.pop();
        }
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