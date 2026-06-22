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
       void solve(TreeNode* root , int depth , int &maxD) {
        if (root == NULL) return;

        solve(root->left , depth+1 , maxD);
        solve(root->right , depth+1 , maxD);
        maxD = max(maxD , depth);
       }
       int maxdepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) return 1;

        int depth = 1;
        int maxD = INT_MIN;
        solve(root , depth , maxD);
        return maxD;
       }
};