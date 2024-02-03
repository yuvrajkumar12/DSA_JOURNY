#include<iostream>
#include<stack>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
    node(int k) {
        key = k;
        left = right = NULL;
    }
};

void Iterativepostorder(node* root) {
    if (root == NULL)
        return;

    stack<node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        node* curr = s1.top();
        s1.pop();
        s2.push(curr);

        if (curr->left != NULL)
            s1.push(curr->left);
        if (curr->right != NULL)
            s1.push(curr->right);
    }

    while (!s2.empty()) {
        node* curr = s2.top();
        s2.pop();
        cout << curr->key << " ";
    }
}

int main() {
    node* root = new node(90);
    root->left = new node(40);
    root->right = new node(30);
    root->left->left = new node(80);
    root->right->right = new node(70);
    root->right->left = new node(50);

    Iterativepostorder(root);
    return 0;
}
