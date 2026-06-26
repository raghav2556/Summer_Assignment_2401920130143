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

class Codec {
    public:
    void solve(TreeNode* root , string &data) {
        if (root == NULL) {
            data += "N,";
            return;
        }

        data += to_string(root->val) + ",";
        solve(root->left , data);
        solve(root->right , data);
    }

    string serialize(TreeNode* root) {
        string data;
        solve(root , data);
        return data;
    }

    TreeNode* build(vector<string> &nodes , int &idx) {
        if (nodes[idx] == "N") {
            idx++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(nodes[idx]));
        idx++;

        root->left = build(nodes , idx);
        root->right = build(nodes , idx);

        return root;
    }

    TreeNode* deserialize(string &data) {
        vector<string> nodes;
        string temp;

        for (char ch : data) {
            if (ch == ',') {
                nodes.push_back(temp);
                temp.clear();
            }
            else {
                temp += ch;
            }
        }

        int idx = 0;
        return build(nodes , idx);
    }
};