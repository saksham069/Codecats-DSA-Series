class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        int buyAt = 0;
        int sellAt = 0;
        int len = prices.size();
        for (int i = 0; i<len; i++){
            if (prices[i] > prices[sellAt]) sellAt = i;
            else if (prices[i] < prices[buyAt]) {
                buyAt = i;
                sellAt = i;
            }
            if (prices[sellAt] - prices[buyAt] > prof) prof = prices[sellAt] - prices[buyAt];
        }
        return prof;
    }
};