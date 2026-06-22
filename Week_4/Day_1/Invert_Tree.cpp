#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
      int val;
      TreeNode* left;
      TreeNode* right;

      TreeNode(int d) {
        this->val = d;
        this->left = NULL;
        this->right = NULL;
      }
};

class solution {
    public:
      TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;

        swap(root->left , root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
      }
};