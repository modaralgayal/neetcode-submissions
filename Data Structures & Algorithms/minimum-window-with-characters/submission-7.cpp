class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> t_freq;
        unordered_map<char, int> s_freq;

        unordered_set<char> model; 
        bool valid = false;

        string actual = "", ans;
        sort(t.begin(), t.end());

        for (auto c : t) {
            t_freq[c]++;
        }

        int lo = 0, minstr = 1001, n = s.size(), formed = 0;
        for (int hi = 0; hi < n; hi++) {
            
            actual += s[hi];
            s_freq[s[hi]]++;
            if (t_freq.count(s[hi]) && s_freq[s[hi]] == t_freq[s[hi]]) formed++;

            if (formed == t_freq.size()) {
            if (actual.size() < minstr) {
                    minstr = actual.size();
                    ans = actual;
            }

            // Shortening loose values at position lo
            while (t_freq.find(s[lo]) == t_freq.end() || s_freq[s[lo]] > t_freq[s[lo]]) {
                actual = actual.substr(1);
                s_freq[s[lo]]--;
                lo++;

                if (actual.size() < minstr) {
                    minstr = actual.size();
                    ans = actual;
                }
            }

            actual = actual.substr(1);
            if (t_freq.count(s[lo]) && s_freq[s[lo]] == t_freq[s[lo]]) formed--;
            s_freq[s[lo]]--;
            lo++;
            }
        }

        return ans;


    }
};
