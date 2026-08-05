class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> maxHeap; 
        vector<int> res;

        int lo = 0, n = nums.size();
        for (int hi = 0; hi < n; hi++) {
            maxHeap.push({nums[hi], hi});
            if (hi >= k - 1) {
                
                while (maxHeap.top().second <= hi - k){ 
                    maxHeap.pop();
                }

                res.push_back(maxHeap.top().first);
            }
        }

        return res; 
    }
};
