class Solution {
  public:
    int helper(vector<int>& arr, vector<int>& dp, int n){
        if(n <= 1) return (abs(arr[n] - arr[0]));
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n]  = min((abs(arr[n] - arr[n-1]) + helper(arr, dp, n - 1)),(abs(arr[n] - arr[n -2]) + helper(arr,dp, n-2)));
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int> dp(n+1, -1);
        return helper(height, dp, n-1);
    }
};