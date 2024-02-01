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

int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else{
        return max(height(root->left),height(root->right)+1);
    }
}
void printTree(node *root,int lev=0)
{
    if(root!=NULL)
    {
        printTree(root->right,lev+1);
        for(int i=0;i<lev;i++)
        {
            cout<<"  ";
        }
        cout<<root->key<<" ";
        printTree(root->left,lev+1);
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
    cout<<"Height of the Tree: "<<height(root)<<" "<<endl;
    cout<<"print Tree: ";
    printTree(root);

    return 0;
}