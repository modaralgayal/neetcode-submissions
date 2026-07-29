class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), total = 0;
        vector<int> pref(n,0);
        vector<int> suf(n,0);

        pref[0] = height[0];
        for (int i = 1; i < n; i++) {
            pref[i] = max(height[i], pref[i-1]);
            cout << pref[i] << " ";
        }

        cout << "\n";

        suf[n-1] = height[n-1];
        for (int j = n - 2; j >= 0; j--) {
            suf[j] = max(height[j], suf[j+1]);
            cout << suf[j] << " ";
        }

        cout << "\n";


        for (int t = 0; t < n; t++) {
            total += min(pref[t],suf[t]) - height[t];
        }

        return total;
        }
};
