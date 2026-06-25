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
      void solve(TreeNode* root , int targetSum , int sum , bool &flag) {
        if (root == NULL) return;
        sum += root->val;

        if ((root->left == NULL && root->right == NULL) && (sum == targetSum)) {
            flag = true;
            return;
        }

        solve(root->left , targetSum , sum , flag);
        solve(root->right , targetSum , sum , flag);
      }
     
      bool pathsum(TreeNode* root , int targetSum) {
        if (root == NULL) return false;
        int sum = 0;
        bool flag = false;
        solve(root , targetSum , sum , flag);
      }
};