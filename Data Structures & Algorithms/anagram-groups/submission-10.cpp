class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> hash; 
        vector<vector<string>> output; 
        int n = strs.size(); int v_idx = 0; 

        for (auto str: strs) {
            string anagram = str;
            sort(anagram.begin(), anagram.end());
            if (hash.find(anagram) != hash.end()) {
                output[hash[anagram]].push_back(str);
            } else {
                hash[anagram] = v_idx;
                output.push_back({});
                output[v_idx].push_back(str);
                v_idx++;
            }
        }
        return output;

    }
};
