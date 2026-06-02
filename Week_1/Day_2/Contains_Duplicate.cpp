#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       bool containsduplicate(vector<int> nums) {
        unordered_set<int> st;
        for (int x : nums) {
            if (st.count(x)) return true;
            st.insert(x);
        }
        return false;
    }
};

