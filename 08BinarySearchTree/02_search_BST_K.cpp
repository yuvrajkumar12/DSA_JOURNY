#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node* right;
    node(int s){
        this->data=s;
        this->left=NULL;
        this->right=NULL;
    }
};
bool searchitem(node *root,int k){
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    else if(k>root->data){
        return searchitem(root->right,k);
    }
    else{
        return searchitem(root->left,k);
    }
    return -1;
}
void printBST(node *root){
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
node *insertBST(node *root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=insertBST(root->left,data);
    }
    else{
        root->right=insertBST(root->right,data);
    }
    return root;
}
void takeInput(node* &root){
   int data;
    cin>>data;
    while(data!=-1){
        root=insertBST(root,data);
        cin>>data;
    }
}
int main(){
    node *root=NULL;
    cout<<"Enter your key value to search the data"<<endl;
    int k;
    cin>>k;
    cout<<"Enter data in BST"<<endl;
    takeInput(root);
    cout<<"print level order traversal in binay searc tree"<<endl;
    printBST(root);
   if (searchitem(root, k)) {
        cout << "Key " << k << " found in the BST." << endl;
    } else {
        cout << "Key " << k << " not found in the BST." << endl;
    }
    return 0;
}