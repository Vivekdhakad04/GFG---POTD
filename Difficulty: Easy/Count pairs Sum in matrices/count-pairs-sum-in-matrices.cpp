class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int ans = 0; 
        int n = mat1.size();
        
       
        for(int i = 0; i < n; ++i) 
        {
            for(int j = 0; j < n; ++j) 
            {
                int rem = x - mat1[i][j]; 
                if(rem <= 0) break; 
                
                int ii = 0, jj = n - 1;
                
                while(ii >= 0 && jj >= 0 && ii < n && jj < n) 
                {
                    if(mat2[ii][jj] == rem) 
                    { 
                        ++ans;
                        break;
                    }
                    
                    else if(rem > mat2[ii][jj]) 
                        ++ii;
                
                    else 
                        --jj;
                
                }
            }
        }
        return ans; 
    }
};