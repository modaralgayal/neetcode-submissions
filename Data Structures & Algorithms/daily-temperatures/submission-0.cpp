class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size(), loc = 0;
        vector<int> res; 

        for (int i = 0; i < n; i++) {
            int r = i + 1; 
            loc = 0;

            while(r < n) {
                if (temperatures[r] > temperatures[i]) {
                    loc = r - i;
                    break;
                }
                else r++;
            }
            res.push_back(loc);
        }

        return res;
    }
};
