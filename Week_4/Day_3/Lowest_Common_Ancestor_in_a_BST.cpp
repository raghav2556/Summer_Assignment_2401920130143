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
     TreeNode* LCAinBST(TreeNode* root , TreeNode* p , TreeNode* q) {
        if (root == NULL) return NULL;

        if (root->val > p->val && root->val > q->val) return LCAinBST(root->left , p , q);
        if (root->val < p->val && root->val < q->val) return LCAinBST(root->right , p , q);

        return root;
     }
};