#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      string palindromic(string &s) {
        if (s.size() <= 1) return s;

        int start = 0;
        int maxlen = 1;

        for (int i=0; i<s.size(); i++) {
            int left = i;
            int right = i;

            while ((left >= 0 && right < s.size()) && s[left] == s[right]) {
                int currlen = right - left + 1;
                if (currlen > maxlen) {
                    start = left;
                    maxlen = currlen;
                }

            }

            left = i;
            right = i+1;
            while ((left >= 0 && right < s.size()) && s[left] == s[right]) {
                int currlen = right - left + 1;
                if (currlen > maxlen) {
                    start = left;
                    maxlen = currlen;
                }
            }
        }

        return s.substr(start , maxlen);
      }
};