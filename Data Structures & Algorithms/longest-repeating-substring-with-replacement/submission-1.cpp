class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), len = 0, hi_freq = 0;
        unordered_map<char, int> freq;
        
        int lo = 0, wnd_size = 0, max_f = 0;
        for (int hi = 0; hi < n; hi++) {
            
            freq[s[hi]]++;
            max_f = max(max_f, freq[s[hi]]);

            while ((hi - lo + 1) - max_f > k) {
                freq[s[lo]]--;
                lo++;
            }

            wnd_size = max(wnd_size, hi - lo + 1);
        }

        return wnd_size;
    }
};
