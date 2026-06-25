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
     int solve(TreeNode* root , int maxsum) {
        if (root == NULL) return 0;

        int left = solve(root->left , maxsum);
        int right = solve(root->right , maxsum);

        int curr = left + right + root->val;

        maxsum = max(maxsum , curr);

        return root->val + max(left , right);


     }
     int maximumpathsum(TreeNode* root) {
        int maxsum = INT_MIN;
        solve(root , maxsum);
        return maxsum;
     }
};