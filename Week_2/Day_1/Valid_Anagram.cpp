#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       bool validanagram(string &s , string &t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        if (s.size() != t.size()) return false;

        if (s.find(t) == string::npos) return false;
        return true;
       }
};