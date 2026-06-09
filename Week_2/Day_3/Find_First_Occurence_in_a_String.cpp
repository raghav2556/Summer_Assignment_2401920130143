#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      int firstoccurence(string &haystack , string &needle) {
        if (haystack.find(needle) == string::npos) return -1;
        return haystack.find(needle);
      }
};