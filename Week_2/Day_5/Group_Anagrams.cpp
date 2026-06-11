#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      vector<vector<string>> groupanagrams(vector<string> &strs) {
        unordered_map<string , vector<string>> mp;

        for (auto &i : strs) {
            string temp = i;
            sort(i.begin() , i.end());
            mp[i].push_back(temp);
        }

         vector<vector<string>> ans;
        for (auto &i : mp) ans.push_back(i.second);

        return ans;
      }
};