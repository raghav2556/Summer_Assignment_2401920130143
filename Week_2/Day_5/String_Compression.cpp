#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      int compression(vector<char> &chars) {
        int k=0;

        for (int i=0; i<chars.size();) {
            char curr = chars[i];
            int cnt = 0;

            while (i < chars.size() && chars[i] == curr) {
                cnt++;
                i++;
            }

            chars[k++] = curr;

            if (cnt > 1) {
                string s = to_string(cnt);
                for (char c : s) {
                    chars[k++] = c;
                }
            }
        }
        return k;
      }
};