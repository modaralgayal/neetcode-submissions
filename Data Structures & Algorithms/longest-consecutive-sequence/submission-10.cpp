class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int max_size = 0;
        for (int num : nums) {
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1; 
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }
                max_size = max(max_size, length);
            }
        }

        return max_size;
    }
};
