#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
     vector<vector<int>> reshapematrix(vector<vector<int>> &mat , int r , int c) {
        int n = mat.size();
        int m = mat[0].size();

        if (m*n != r*c) return mat;
        vector<vector<int>> ans(r , vector<int>(c));

        for (int i=0; i<m*n; i++) ans[i/c][i%c] = mat[i/m][i%m];

        return ans;
    }
};