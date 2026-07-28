class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int start = 0, end = n-1;



        while (start < end) {
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;

            if (tolower((unsigned char)s[start]) != tolower((unsigned char)s[end])) {
                cout << s[start] << " " << s[end] << "\n"; 
                return false;
            }

            start++;
            end--;
        }
        return true;
    }
};
