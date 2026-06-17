#include<bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int,int>> st;

    MinStack() {
    }

    void push(int d) {
        if (st.empty()) st.push({d , d});
        else {
            st.push({d , min(st.top().second , d)});
        }
    }

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};