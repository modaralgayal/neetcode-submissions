class Solution {
public:
    int rob(vector<int>& nums) {
        // We must break down the problem to
        // Up until house I what is the most
        // we can collect from the array. 

        // Let's use bottom-up DP
        int n = nums.size(); 
        vector<int> dp(n + 1, -1); 


        if (n == 2) {
            return max(nums[0], nums[1]);
        } else if (n == 1) return nums[0];


        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        int mx = max(nums[1], nums[0]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
            mx = max(dp[i], mx);
        }

        return mx; 
    }
};
