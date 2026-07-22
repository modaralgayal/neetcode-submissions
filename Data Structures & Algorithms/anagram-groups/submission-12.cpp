class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash; 
        int n = strs.size(); 

        for (auto str: strs) {
            string anagram = str;
            sort(anagram.begin(), anagram.end());
            hash[anagram].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : hash) {
            result.push_back(pair.second);
        }

        return result;

    }
};
