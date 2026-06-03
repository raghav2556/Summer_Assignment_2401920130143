#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      vector<int> squaresofarray(vector<int> &nums) {
        vector<int> ans(nums.size());
        int i=0;
        int j=nums.size() - 1;
        int k=j;

        while(i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                ans[k--] = nums[i] * nums[i];
                i++;
            }
            else {
                ans[k--] = nums[j] * nums[j];
                j--;
            }
        }

        return ans;
    }
};



