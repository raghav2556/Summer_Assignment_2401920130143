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
      bool solve(TreeNode* l , TreeNode* r) {
        if (l == NULL && r == NULL) return true;
        if (l == NULL || r == NULL) return false;

        return (l->val == r->val) && solve(l->left , r->right) && solve(l->right , r->left);
      }
      bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return solve(root->left , root->right);
      }
};