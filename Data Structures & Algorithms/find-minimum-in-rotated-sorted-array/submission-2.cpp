class Solution {
public:
    int findMin(vector<int> &nums) {
        // We need to navigate lo and hi so that lo < hi. 

        int lo = 0, hi = nums.size() - 1, ans = INT_MAX; 

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2; 
            int midVal = nums[mid];

            if (midVal > nums[hi]) {
                lo = mid + 1; 

            } else {
                hi = mid; 
            }
        }

        return nums[lo]; 
    }
};
