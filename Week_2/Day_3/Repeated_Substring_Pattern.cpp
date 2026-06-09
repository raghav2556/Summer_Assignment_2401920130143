#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      bool repeatedsubstring(string &s) {
        int n = s.size();

        for (int len = 1; len <= n/2; len++) {
            if (n % len != 0) continue;

            string sub = s.substr(0,len);
            string ans = "";

            for (int i=0; i<n/len; i++) {
                ans += sub;
            }

            if (ans == s) return true;
        }
        return false;
      }
};