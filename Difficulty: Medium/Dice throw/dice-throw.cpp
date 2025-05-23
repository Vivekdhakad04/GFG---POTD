class Solution {
  public:
    int helper(int m, int n, int x, vector<vector<int>>& memo)
    {
        //base case
        //valid combination
        if(n == 0 && x == 0)
        return 1;
        
        //invalid combination
        if(n == 0 || x <= 0)
        return 0;
        
        if(memo[n][x] != -1)
        return memo[n][x];
        
        int ans = 0;
        
        for(int i = 1; i <= m; i++)
        {
            ans += helper(m , n-1, x-i, memo);
        }
    return memo[n][x] = ans;
    }
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>> memo(n+1, vector<int> (x+1 , -1));
        
        return helper(m,n,x,memo);
    }
};