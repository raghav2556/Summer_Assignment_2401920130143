#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
    int longestsubstring(string &s) {
        int l = 0;
        int ans = 0;
        unordered_set<int> st;

        for (int i=0; i<s.size(); i++) {
            while(st.count(s[i])) {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[i]);
            ans = max(ans , i-l+1);
        }
        return ans;
    }
};

