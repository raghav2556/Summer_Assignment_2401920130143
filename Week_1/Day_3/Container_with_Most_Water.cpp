#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
     int mostwater(vector<int> &height) {
        int l = 0;
        int r = height.size()-1;
        int maxarea = INT_MIN;

        while (l < r) {
            int area = min(height[l] , height[r]) * (r-l);
            cout << "area: " << area << endl;
            maxarea = max(maxarea , area);
            cout << "maxarea: " << maxarea << endl;
            

            if (height[l] < height[r]) l++;
            else r--;
        }
        return maxarea;
    }
};

