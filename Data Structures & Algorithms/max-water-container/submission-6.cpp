class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(), l = 0, r = n - 1, ans = 0, area;

        while (l < r && r < n) {
            area = min(heights[l],heights[r]) * (r - l);
            ans = max(ans, area);

            r++;
            if (r == n) {
                l++; 
                r = l + 1;
            }
        }

        return ans; 

    }
};
