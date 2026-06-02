#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       int maximumsubarray(vector<int> &nums) {
        int sum = 0;
        int ans = INT_MIN;

        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            ans = max(sum , ans);
            if (sum < 0) sum = 0;
        }

        return ans;
       }
};

