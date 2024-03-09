#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node *insertBinarytree(node* root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=insertBinarytree(root->left,data);
    }
    else{
        root->right=insertBinarytree(root->right,data);
    }
    return root;

}
void print(node* root){//Level order traversal 
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
             cout<<curr->data<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
       
    }
}
void takeInput(node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertBinarytree(root,data);
        cin>>data;
    }
}
int main(){
    node *root=NULL;
    cout<<"Enter data in BST"<< endl;
    takeInput(root);
    cout<<"print lavel order traversal in binary tree";
    print(root);
    return 0;
}
