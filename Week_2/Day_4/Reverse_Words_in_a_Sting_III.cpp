#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      string reversewords(string &s) {
        if (s.size() == 1) return s;

        int i=0;
        int j=0;

        while(i < s.size()) {
            if (s[i] == ' ') {
                reverse(s.begin() + j , s.begin() + i);
                j = i+1;
            }
            i++;
        }

        reverse(s.begin() + j , s.end());
        return s;
      }
};