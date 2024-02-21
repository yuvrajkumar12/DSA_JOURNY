#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }

        if (root == p || root == q) {
            return root;
        }

        TreeNode* leftTree = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightTree = lowestCommonAncestor(root->right, p, q);

        if (leftTree && rightTree) {
            return root;
        }

        return (leftTree != nullptr) ? leftTree : rightTree;
    }
};

int main() {
    // Creating a simple binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    Solution solution;

    // User inputs for nodes p and q
    int p_val, q_val;
    cout << "Enter the value of node p: ";
    cin >> p_val;
    cout << "Enter the value of node q: ";
    cin >> q_val;

    TreeNode* p = new TreeNode(p_val);
    TreeNode* q = new TreeNode(q_val);

    TreeNode* lca = solution.lowestCommonAncestor(root, p, q);

    if (lca != nullptr) {
        cout << "Lowest Common Ancestor: " << lca->val << endl;
    } else {
        cout << "One or both of the nodes not found in the tree." << endl;
    }

    // Clean up memory (assuming there's a proper deallocation function for TreeNode)
    // You might want to implement a proper destructor for TreeNode
    delete root->left->right->right;
    delete root->left->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root;

    delete p;
    delete q;

    return 0;
}
