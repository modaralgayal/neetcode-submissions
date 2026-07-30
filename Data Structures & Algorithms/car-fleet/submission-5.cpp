class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {   
        vector<pair<int, int>> posNspeed;
        stack<double> stk;
        int n = speed.size();

        for (int i = 0; i < n; i++) {
            posNspeed.push_back({position[i], speed[i]});
        }

        sort(posNspeed.begin(), posNspeed.end(), greater<>());


        for (int i = 0; i < n; i++) {
            double mostRecent = (double)(target - posNspeed[i].first) / posNspeed[i].second;

            if (stk.empty() || mostRecent > stk.top()) {
                stk.push(mostRecent);
            } 
        }

        return stk.size(); 
    }
};
