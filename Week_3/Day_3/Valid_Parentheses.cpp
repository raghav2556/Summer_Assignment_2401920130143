#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      bool validparentheses(string &s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') st.push(ch);

            else {
                if (!st.empty()) {
                    char top = st.top();

                    if ((top == '(' && ch == ')') || (top == '{' && ch == '}')
                                             || (top == '[' && ch == ']')) st.pop();
                    else return false;
                }
            }
        }
        return st.empty();
      }
};