// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        
        int c0 = 1;
        
        //mark the zeroes
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j] == 0)
                {
                    mat[i][0] = 0;
                    
                    if(j == 0)
                    c0 = 0;
                    else
                    mat[0][j] = 0;
                }
            }
        }
        
        //change the marked rows and col to zeores
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(mat[i][0] == 0 || mat[0][j] == 0)
                mat[i][j] = 0;
            }
        }
        
        //priority-> mark the first row-(left to right)
        if(mat[0][0] == 0)
        {
            for(int j = 0; j < n; j++)
            mat[0][j] = 0;
        }
        
        //then mark the first col- (top to down)
        if(c0 == 0)
        {
            for(int i = 0; i < m; i++)
            mat[i][0] = 0;
        }
    }
};