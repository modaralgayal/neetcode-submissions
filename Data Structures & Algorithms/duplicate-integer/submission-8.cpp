class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (hash[nums[i]] != 0) return true;
            hash[nums[i]]++;
        };
        return false;
    }
};