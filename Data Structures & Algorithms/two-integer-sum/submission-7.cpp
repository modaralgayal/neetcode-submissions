class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Let's make a hashmap that stores the value as the index and look for the complement
        unordered_map<int, int> hash;
        int n = nums.size(); int complement; 
        
        for (int i = 0; i < n; i++) {
            complement = target - nums[i];
            
            if (hash.find(complement) != hash.end() && hash[complement] != i) return {hash[complement], i};

            hash[nums[i]] = i; 
        }
    return {};
    }
};
