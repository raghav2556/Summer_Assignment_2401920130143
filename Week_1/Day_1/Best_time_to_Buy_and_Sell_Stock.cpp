#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
        int besttime(vector<int> &stocks) {
            int ans = INT_MIN;
            int buy = stocks[0];

            for (int i=1; i<stocks.size(); i++) {
                if (stocks[i] < buy) {
                    buy = stocks[i];
                }
                int prof = stocks[i] - buy;
                ans = max(ans , prof);
            }
            return ans;
        }
};


