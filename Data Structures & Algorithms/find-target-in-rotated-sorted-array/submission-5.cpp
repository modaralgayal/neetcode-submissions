class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;


        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            int midVal = nums[mid]; 

            if (midVal > nums[hi]) lo = mid + 1; 

            else hi = mid; 
        } // here we get the idx of the smallest value in the array. 


        int res =  binarySearch(nums, target, 0, lo - 1);
        if (res != -1) return res; 

        return binarySearch(nums, target, lo, nums.size() - 1); 
    }



    int binarySearch(vector<int>& nums, int target,int lo,int hi) {


        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2; 
            int midVal = nums[mid];

            if (midVal == target) return mid; 

            if (midVal < target) lo = mid + 1;
            else hi = mid - 1; 
        }
    
        return -1; 

    }

};
