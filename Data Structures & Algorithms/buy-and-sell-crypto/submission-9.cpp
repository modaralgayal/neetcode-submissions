class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int bestProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);       
            bestProfit = max(bestProfit, price - minPrice);
        }

        return bestProfit;
    }
};
