class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n), suf(n), ans;

        // Calculate the prefix
        pref[0] = 1;
        for (int i = 1; i < n; i++) {
            pref[i] = nums[i - 1] * pref[i - 1];
        }

        // Calculate the suffix
        suf[n-1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = nums[i + 1] * suf[i + 1];
        }


        for (int i = 0; i < n; i++) {
            ans.push_back(pref[i] * suf[i]);
        }


        return ans; 
    }
};
