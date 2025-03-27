class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size(), buy = prices[0], sell, profit = 0;
        for (int i = 1; i < s; i++)
        {
            sell = prices[i];
            if (sell > buy)
                profit += sell - buy;
            buy = sell;
        }   
        return profit;
    }
};
