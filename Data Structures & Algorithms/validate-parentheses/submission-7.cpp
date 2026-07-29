class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n = s.size();

        for (char cs : s) {
            if (cs == '(' || cs == '[' || cs == '{') stk.push(cs);

            else {
                if (stk.empty()) return false;

                char top = stk.top();
                stk.pop();

                if (top == '(' && cs != ')') return false;
                if (top == '[' && cs != ']') return false;
                if (top == '{' && cs != '}') return false;

            }
        }

        return stk.empty();
    }
};
