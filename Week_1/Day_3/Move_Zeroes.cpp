#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       void movezeroes(vector<int> &nums) {
        int nonZ = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i] , nums[nonZ]);
                nonZ++;
            }
        }
    }
};

