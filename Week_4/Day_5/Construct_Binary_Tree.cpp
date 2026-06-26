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
      TreeNode* solve(vector<int> &preorder, vector<int> &inorder, unordered_map<int , int> &mp,
                        int instart, int inend, int n, int &idx) {
                            if (idx > n || instart > inend) return NULL;

                            TreeNode* root = new TreeNode(preorder[idx++]);
                            int posi = mp[root->val];

                            root->left = solve(preorder, inorder, mp, instart, posi-1, n, idx);
                            root->right = solve(preorder, inorder, mp, posi+1, inend, n, idx);

                            return root;
                        }
      TreeNode* buildtree(vector<int> &inorder , vector<int> &preorder) {
        int n = inorder.size();
        int idx = 0;
        unordered_map<int , int> mp;
        
        for (int i=0; i<n; i++) mp[inorder[i]] = i;

        return solve(preorder , inorder , mp , 0 , n-1 , n, idx);
      }
};