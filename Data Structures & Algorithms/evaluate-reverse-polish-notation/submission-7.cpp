class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int res, a, b;

        for (const string& s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
            b = stk.top(); stk.pop(); 
            a = stk.top(); stk.pop();
            
            if (s == "+") res = a + b;
            else if (s == "-") res = a - b;
            else if (s == "*") res = a * b;
            else res = a / b;

            stk.push(res);
            } else {
                stk.push(stoi(s));
            }
        }
         
        return stk.top();
    }
};
