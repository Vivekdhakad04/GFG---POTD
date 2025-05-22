class Solution {
  public:
  
    int lps(string& s, int low, int high, vector<vector<int>>& memo)
    {
        //base case
        if(low > high)
        return 0;
        
        if(low == high)
        return 1;
        
        if(memo[low][high] != -1)
        return memo[low][high];
        
        //match
        if(s[low] == s[high])
        return memo[low][high] =  2 + lps(s,low+1,high-1,memo) ;
        
        //not match
        else{
            return memo[low][high] = max(lps(s,low+1,high,memo), lps(s,low,high-1,memo));
        }
    }
    int minDeletions(string s) {
        // code here
        //USING MEMOIZATION
         int n = s.length();
        vector<vector<int>> memo(n, vector<int> (n , -1));
       
        int str = lps(s,0,n-1,memo);
        return n - str;
    }
};