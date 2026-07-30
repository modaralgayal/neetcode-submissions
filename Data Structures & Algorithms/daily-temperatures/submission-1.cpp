class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> temps; 
        int n = temperatures.size(), i = 0;
        vector<int> res(n, 0);

        
        for (int i = 0; i < n; i++) {
            int next_temp = temperatures[i];

            while (!temps.empty() && next_temp > temps.top().first) {
                res[temps.top().second] = i-temps.top().second;
                temps.pop();
            }

            temps.push({next_temp, i});
        }

        return res;

    }
};
