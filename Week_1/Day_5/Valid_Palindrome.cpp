#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
       bool isvalid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                         (ch >= '0' || ch <= '9')) return true;
        else return false;
       }
       bool validpalindrome(string &s) {
        string temp;

        for (char ch : s) {
            if (isvalid(ch)) temp.push_back(tolower(ch));
        }

        int start = 0;
        int end = temp.size() - 1;

        while(start < end) {
            if (temp[start] != temp[end]) return false;
            start++;
            end--;
        }

        return true;
       }
};