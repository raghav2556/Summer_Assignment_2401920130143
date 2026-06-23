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
      vector<vector<int>> levelorder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        ans.push_back({root->val});
        vector<int> temp;

        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front != NULL) {
                if (front->left) {
                    temp.push_back(front->left->val);
                    q.push(front->left);
                }

                if (front->right) {
                    temp.push_back(front->right->val);
                    q.push(front->right);
                }
            }

            else {
                if (!q.empty()) q.push(NULL);
            }

            if (!temp.empty() && q.front() == NULL) {
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
      }
};