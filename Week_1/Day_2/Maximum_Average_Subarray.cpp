#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      double maximumaverage(vector<int> &nums , int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += nums[i];
        }

        int maxsum = sum;
        for (int i=k; i<nums.size(); i++) {
            sum += nums[i] - nums[i-k];
            maxsum = max(maxsum , sum);
        }
        return maxsum/(double)k;
    }
};

