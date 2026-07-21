class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();

        if (s.size() != t.size()) return false; 
        unordered_map<char, int> hash_s;
        unordered_map<char, int> hash_t; 
        set<char> unique_chars;

        for (int i = 0; i < n; i++) {
            hash_s[s[i]]++;
            hash_t[t[i]]++;
            unique_chars.insert(s[i]);
        }

        for (auto x : unique_chars) {
            if (!hash_t[x]) return false; 

            if (hash_s[x] != hash_t[x]) return false; 
        }

        return true; 
    }
};
