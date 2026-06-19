#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    public:
      stack<int> s1;
      stack<int> s2;

      MyQueue() {
      }

      void push(int x) {
        s1.push(x);
      }

      void move() {
        if (s2.empty()) {
            while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
            }
        }
      }

      int pop() {
        move();
        int val = s2.top();
        s2.pop();
        return val;
      }

      int peek() {
        move();
        return s2.top();
      }

      bool isEmpty() {
        return s1.empty() && s2.empty();
      }
};