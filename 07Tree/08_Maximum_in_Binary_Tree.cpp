#include<iostream>
#include<vector>
#include<queue>//include queue header file
#include<climits> // Include the header file for INT_MIN
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
void MaximumSize(node *root)//using Queue
{
    int Max1=INT_MIN;
    if(root==NULL) return;
    queue<node *>q;
    q.push(root);
    while(!q.empty())
    {
        node *curr=q.front();
        q.pop();
        Max1=max(Max1,curr->key);
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);

    }
    cout<<Max1<<endl;
}
int Maxsize2(node *root)
{
    if(root==NULL)
        return INT_MIN;
    else
    {
        return max(root->key, max(Maxsize2(root->left), Maxsize2(root->right)));
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
    cout<<"using queue: ";
    MaximumSize(root);
    cout<<"Maximum Size using recursion: "<<Maxsize2(root)<<endl;
    return 0;
}