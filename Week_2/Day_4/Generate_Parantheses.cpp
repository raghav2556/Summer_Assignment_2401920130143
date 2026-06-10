#include<bits/stdc++.h>
using namespace std;

class soltuion {
    public:
       void solve(int n , int open , int close , vector<string> &ans , string temp) {
        if (temp.size() == 2*n) {
            ans.push_back(temp);
            return;
        }

        if (open < n) {
            temp.push_back('(');
            solve(n , open+1 , close , ans , temp);
            temp.pop_back();
        }

        if (close < open) {
            temp.push_back(')');
            solve(n , open , close+1 , ans , temp);
            temp.pop_back();
        }
       }
       vector<string> generateparentheses(int n) {
        vector<string> ans;
        string temp;

        solve(n , 0 , 0 , ans , temp);
        return ans;
       }
};