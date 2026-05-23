class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice1 = INT_MAX;
        int maxProfit1 = 0;
        int minPrice2 = INT_MAX;
        int maxProfit2 = 0;

        for (int price : prices) {
            minPrice1 = min(minPrice1, price);        
            maxProfit1 = max(maxProfit1, price - minPrice1);
            minPrice2=min(minPrice2,price-maxProfit1);
            maxProfit2=max(maxProfit2,price-minPrice2);
        }
        return maxProfit2;
    }
};