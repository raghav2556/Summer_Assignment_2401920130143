#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      string decodestring(string &s) {
        stack<int> st1;
        stack<string> st2;

        string sub = "";
        int n = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                n = n*10 + (ch-'0');
            }

            else if (ch == '[') {
                st1.push(n);
                st2.push(sub);
                n = 0;
                sub = "";
            }

            else if (ch == ']') {
                string temp = sub;
                int num = st1.top();
                st1.pop();

                sub = st2.top();
                st2.pop();

                while(num--) {
                    sub += temp;
                }
            }

            else {
                sub += ch;
            }
        }
        return sub;
      }
};