class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buyPrice = prices[0];
        int max_Profit = 0;

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] < buyPrice) {
                buyPrice = prices[i];
            }

            int current_profit = prices[i] - buyPrice;

            if (current_profit > max_Profit) {
                max_Profit =current_profit;
            }
        }

        return max_Profit; 
    }
};
