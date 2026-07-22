class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int, int> hash;

        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        for (auto& pair : hash) {
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> res; 
        for (int j = n; j > 0; j--) {
            if (bucket[j].size() > 0) {
                for (int x : bucket[j]) {
                    if (res.size() < k) res.push_back(x); 
                }
            }
        }
        return res; 
    }
};
