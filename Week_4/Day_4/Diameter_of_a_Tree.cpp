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
     int solve(TreeNode* root , int &dia) {
        if (root == NULL) return 0;

        int left = solve(root->left , dia);
        int right = solve(root->right , dia);

        dia = max(dia , left + right);

        return 1+max(left , right);
     }
     int diameter(TreeNode* root) {
        int dia;
        solve(root , dia);
        return dia;
     }
};