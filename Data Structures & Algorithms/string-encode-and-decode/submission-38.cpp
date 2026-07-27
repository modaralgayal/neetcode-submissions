class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        const string empt = "List is empty";
        if (strs.size() == 0) return empt;

        for (auto str : strs) {
            encoded_string += str + '-';
        }

        cout << encoded_string;

        return encoded_string;
    }

    vector<string> decode(string s) {
        if (s == "List is empty") return {};

        vector<string> outPut; 
        string token; 

        for (char c : s) {
            if (c == '-') {
                outPut.push_back(token);
                token = "";
            } else {
                token += c;
            }

        };
        

        if (!outPut.empty()) return outPut;
        return {""};
    }
};
