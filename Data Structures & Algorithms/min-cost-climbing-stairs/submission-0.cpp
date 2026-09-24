class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // top-down dp
        int n = cost.size();
        vector<int> dp(n + 1); // cheapest cost to reach this idx

        for (int i = 2; i <= n; i++) {

            dp[i] += min(dp[i-1] + cost[i-1], dp[i-2] + cost[i-2]);
        }

        return dp[n];
    }
};
