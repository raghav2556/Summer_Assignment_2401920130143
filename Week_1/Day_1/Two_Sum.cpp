#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
        vector<int> twosum(vector<int> &nums , int target) {
            unordered_map<int,int> mp;

            for (int i=0; i<nums.size(); i++) {
                int n = target - nums[i];
                if (mp.count(n)) return {i , mp[n]};
                mp[nums[i]] = i;
            }
            return {};
        } 
};

