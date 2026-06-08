#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        vector<int> ans;

        if (p.size() > s.size()) return {};

        for (char ch : p) {
            freq1[ch - 'a']++;
        }

        int n = p.size();

        for (int i=0; i<n; i++) {
            freq2[s[i] - 'a']++;
        }

        if (freq1 == freq2) ans.push_back(0);

        for (int i=n; i<s.size(); i++) {
            freq2[s[i] - 'a']++;
            freq2[s[i-n] - 'a']--;

            if (freq1 == freq2) ans.push_back(i-n+1);
        }
        return ans;
    }
};