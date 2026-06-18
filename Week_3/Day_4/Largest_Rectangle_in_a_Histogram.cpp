#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
      vector<int> nextsmaller(vector<int> &heights , int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i=n-1; i>=0; i--) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                ans[i] = s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;
      }

      vector<int> prevsmaller(vector<int> &heights , int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i=0; i<n; i++) {
            while(s.top() != -1 && heights[s.top()] >= heights[i]) {
                ans[i] = s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;
      }

      int maxrectangle(vector<int> &heights) {
        int n = heights.size();

        vector<int> next(n);
        next = nextsmaller(heights , n);
        
        vector<int> prev(n);
        prev = prevsmaller(heights , n);

        int area = INT_MIN;

        for (int i=0; i<n; i++) {
            int l = heights[i];
            if(next[i] == -1) next[i] = n;
            int b = next[i] - prev[i] - 1;

            area = max(area , l*b);
        }
        return area;
      }
};
