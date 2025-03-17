class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = prices[0], sell;
        int i = 0;
        while (++i < prices.size())
        {
            sell = prices[i];
            if (sell > buy)
                profit = max(profit, sell - buy);
            else
                buy = sell;
        }
        return profit;

    }
};
