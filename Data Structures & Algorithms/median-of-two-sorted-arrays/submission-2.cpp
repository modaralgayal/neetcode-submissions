class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // we need to find the index at which the merged array partitions.
        if (nums1.size() > nums2.size()) swap(nums1, nums2);
        int total = nums1.size() + nums2.size();
        int half = (total + 1) / 2;

        int l = 0, r = nums1.size();

        while (l <= r) {
            int i = l + (r - l) / 2;
            int j = half - i;

            int aleft = i > 0 ? nums1[i - 1]                      : -INT_MAX;
            int aright = i < nums1.size() ?  nums1[i] : INT_MAX;

            int bleft = j > 0 ? nums2[j - 1]                      : -INT_MAX;
            int bright = j < nums2.size() ?  nums2[j] : INT_MAX;

            if (aleft <= bright && bleft <= aright) {
                // odd 
                if (total % 2 != 0) return max(aleft, bleft);
                else {
                    return (max(aleft, bleft) + min(aright, bright)) / 2.0;
                }
            }

            else if (aleft > bright) r = i - 1; 
            else l = i + 1; 
        } 

        return 0.0;
    }

};
