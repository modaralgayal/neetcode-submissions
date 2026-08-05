class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Binary search: if the middle is smaller than the target. mid = lo
        // if the middle is larger: mid = hi
        int n = nums.size(), lo = 0, hi = n - 1; 

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int val = nums[mid]; 

            if (val == target) return mid; 

            else if (val > target) {
                hi = mid - 1; 
            } else {
                lo = mid + 1; 
            }
        }
        
        return -1;
    }
};
