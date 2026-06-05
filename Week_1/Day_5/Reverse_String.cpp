#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       void reverse(vector<char> &s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end) {
            swap(s[start++] , s[end--]);
        }
       }
};