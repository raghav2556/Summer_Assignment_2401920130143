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
    void solve(TreeNode* root , vector<int> &ans) {
        if (root == NULL) return;

        solve(root->left , ans);
        ans.push_back(root->val);
        solve(root->right , ans);
    }
    vector<int> inorder(TreeNode* root) {
        vector<int> ans;
        solve(root , ans);
        return ans;
    }
};