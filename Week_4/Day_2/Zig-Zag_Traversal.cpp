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
      vector<vector<int>> zigzag(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        bool LtoR = true;
        vector<int> temp;

        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front != NULL) {
                temp.push_back(front->val);
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
            }

            else {
                if(!q.empty()) q.push(NULL);
                if (LtoR) {
                    ans.push_back(temp);
                    LtoR = false;
                }
                else {
                    reverse(temp.begin() , temp.end());
                    ans.push_back(temp);
                    LtoR = true;
                }
                temp.clear();
            }
        }
        return ans;
    }
};