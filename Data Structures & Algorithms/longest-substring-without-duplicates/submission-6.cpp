class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        unordered_set<char> hash;
        int ans = 1, lo = 0, n = s.size();
        
        hash.insert(s[lo]);
        for (int hi = 1; hi < n; hi++) { 
            
            while (hash.find(s[hi]) != hash.end()) { // is found
                hash.erase(s[lo]);
                lo++;
            }

            hash.insert(s[hi]);
            ans = max(ans, hi - lo + 1);
        }

        return ans;
    }
};
