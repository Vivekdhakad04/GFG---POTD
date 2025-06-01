// User function Template for C++
class Solution {
  public:
    int helper(int n, vector<int> &dp){
        
        //base case
        if(n <= 1)
        return n;
        
        if(dp[n] != -1)
        return dp[n];
        
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
    }
    int nthFibonacci(int n) {
        // code here
       vector<int> dp(n+1,-1);
       return helper(n,dp);
    }
};