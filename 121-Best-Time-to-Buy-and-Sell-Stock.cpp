#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int maxP = 0; // Maximum profit
        int l = 0;    // Left pointer (buy day)

        for (int r = 1; r < prices.size(); ++r) { // Right pointer (sell day)
            if (prices[r] > prices[l]) {
                maxP = max(maxP, prices[r] - prices[l]);
            } else {
                l = r; // Update the left pointer to the current day
            }
        }

        return maxP;
    }
};
