class TimeMap {
public:
    TimeMap() {
        
        // Map of strings as keys, storing vectors of pairs of timestamp 
        // and string
    }

    void set(string key, string value, int timestamp) {
        hash[key].push_back({timestamp, value});
        // push the pair;
    }
    
    string get(string key, int timestamp) {
        auto& name = hash[key];
        int n = name.size(), lo = 0, hi = n - 1;
        string res = ""; 

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2; 
            if (timestamp >= name[mid].first) {
                res = name[mid].second;
                lo = mid + 1;
            }

            else hi = mid - 1;
        }

        return res;
    }



private :
    unordered_map<string, vector<pair<int, string>>> hash;
};
