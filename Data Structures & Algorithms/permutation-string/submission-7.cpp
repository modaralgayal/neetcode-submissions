class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1_freq;
        unordered_map<char, int> s2_freq;
        int n = s2.size();

        for (auto c : s1) {
            s1_freq[c]++;
        }


        int lo = 0, len = s1.size(); 

        sort(s1.begin(), s1.end());
        string perm;

        for (int hi = 0; hi < n; hi++) {
            
            perm += s2[hi];
            if (perm.size() > len) {
                perm = perm.substr(1);
            }
            string comp = perm;
            sort(comp.begin(), comp.end());
            if (s1 == comp) return true; 
        }

        return false;
    }
};
