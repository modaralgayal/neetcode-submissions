class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size(), lo = 0, mid = n/2 - 1, hi = n-1, sum = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> output; 

        for (int lo = 0; lo < n-2; lo++) {
            for (int mid = lo + 1; mid < n-1; mid++) {
                for (int hi = n - 1; hi > mid; hi--) {
                    if (nums[lo] + nums[mid] + nums[hi] == 0) output.insert({nums[lo],nums[mid],nums[hi]});
                }
            }
        }

        vector<vector<int>> ans(output.begin(), output.end());
        return ans;
    }
};
