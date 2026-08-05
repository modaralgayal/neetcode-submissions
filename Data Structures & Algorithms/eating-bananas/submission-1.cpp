class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int sum = 0, largest = 0; 

        for (auto val : piles) {
            largest = max(largest, val);
        }

        int lo = 1, hi = largest, res = hi; 

        while (lo <= hi) {
            int mid = (hi + lo) / 2;
            
            int total_time = 0;
            for (int p : piles) {
                total_time += ceil(static_cast<double>(p) / mid);
            }


            if (total_time <= h) {
                res = mid; 
                hi = mid - 1;
            }

            else {
                lo = mid + 1; 
            }
        }

        return res;
    }
};
