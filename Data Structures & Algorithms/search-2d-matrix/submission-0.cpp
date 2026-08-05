class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        

        for (auto row : matrix) {

            int lo = 0, hi = row.size() - 1;
            if (target > row[hi]) continue; 

            else {
                while (lo <= hi) {
                    int mid = lo + (hi - lo) / 2; 
                    int val = row[mid]; 

                    if (val == target) return true; 

                    else if (val > target) hi = mid - 1; 
                    else lo = mid + 1;
                }
                return false; 
            }
        }

        return false; 
        
    }
};
