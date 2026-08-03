class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), maxP = 0;
        vector<int> pref(n, 0);

        pref[0] = prices[0];
        for (int i = 1; i < n; i++) {
            pref[i] = min(pref[i-1], prices[i]);
        }


        for (int i = 1; i < n; i++) {
            maxP = max(prices[i] - pref[i-1], maxP);
        }

        return maxP;


    }
};
