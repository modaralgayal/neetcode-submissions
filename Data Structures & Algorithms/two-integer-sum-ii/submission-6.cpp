class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size(), lo = 0, hi = n - 1, sum = 0;
        sort(numbers.begin(), numbers.end());

        while(lo < hi) {
            sum = numbers[lo] + numbers[hi];
            if (sum == target) return {lo+1, hi+1};
            else if (sum < target) lo++;
            else if (sum > target) hi--;
        }
    }
};
