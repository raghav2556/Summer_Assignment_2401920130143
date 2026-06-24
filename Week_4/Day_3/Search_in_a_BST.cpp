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
      void solve(TreeNode* root , int val , TreeNode* ans) {
        if (root == NULL) return;
        if (root->val == val) {
            ans = root;
            return;
        }

        if (root->val > val) solve(root->left , val , ans);
        else solve(root->right , val , ans);
      }

      TreeNode* searchbyvalue(TreeNode* root , int val) {
        TreeNode* ans = NULL;
        solve(root , val , ans);
        return ans;
      }
};