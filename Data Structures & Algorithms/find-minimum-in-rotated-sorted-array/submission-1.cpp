class Solution {
public:
    int findMin(vector<int> &nums) {
        priority_queue<int, vector<int>, greater<int>> pq; 


        for (auto c : nums) pq.push(c);


        return pq.top();
    }
};
