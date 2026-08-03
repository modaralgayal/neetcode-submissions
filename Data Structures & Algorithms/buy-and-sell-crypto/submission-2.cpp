class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), maxP = -INT_MAX;
        vector<int> pref(n, 0);
        pair<int, int> lo = {INT_MAX, n}, hi = {-INT_MAX, 0};


        for (int i = 0; i < n; i++) {
            if (prices[i] < lo.first) lo = {prices[i], i};
            if (prices[i] > lo.first && i > lo.second) hi = {prices[i], i};

            if (hi.first > lo.first && hi.second > lo.second) {
                maxP = max(maxP, prices[hi.second]- prices[lo.second]);
            }
        }
        return maxP > 0 ? maxP : 0;
        
    }
};
