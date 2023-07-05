class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left, right;
        int maxProfit = 0, profit = 0;
        
        left = 0, right = 1;

        while(right < prices.size()) {
            if(prices[left] < prices[right]) {
                profit = prices[right] - prices[left];
                maxProfit = max(profit, maxProfit);
            } 
            else 
                left = right;
            right++;
        }
        return maxProfit;
    }
};