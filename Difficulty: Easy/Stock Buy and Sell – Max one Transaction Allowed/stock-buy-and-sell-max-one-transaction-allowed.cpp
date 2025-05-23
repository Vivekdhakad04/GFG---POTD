class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int buy = prices[0], profit = 0;
        
       for(int i = 1; i < n; i++)
       {
           int sell = prices[i];
           profit = max(profit, sell - buy);
           buy = min(buy , sell);
       }
     return profit;
    }
};
