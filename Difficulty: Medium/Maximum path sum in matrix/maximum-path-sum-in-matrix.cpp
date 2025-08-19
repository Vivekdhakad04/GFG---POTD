// User function Template for C++

class Solution {
  public:
  
    int helper(vector<vector<int>>& mat, int i, int j, vector<vector<int>>& dp){
        //base case
        if(j < 0 || j >= mat[0].size()) return INT_MIN;
        if(i == 0) return mat[i][j];
        
        if(dp[i][j] != -1) return dp[i][j];
        //all paths
        int straight = mat[i][j] + helper(mat, i-1 ,j, dp);
        int left = mat[i][j] + helper(mat, i-1 , j-1, dp);
        int right = mat[i][j] + helper(mat, i-1 , j+1, dp);
        
    return dp[i][j] = max({straight, left, right});
    }
    int maximumPath(vector<vector<int>>& mat) {
        // code here
        int row = mat.size();
        int col = mat[0].size();
        int res = INT_MIN;
        vector<vector<int>> dp(row+1, vector<int>(col+1, -1));
        
        for(int i = 0; i < col; i++){
            res = max(res, helper(mat,row-1, i, dp));
        }
    return res;
    }
};