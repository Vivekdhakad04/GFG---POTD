class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int m = mat.size();
        int n = mat[0].size();
        if(n == 1 || m == 1) return false;
        unordered_map<int,int> mpp;
        
        for(int row = 0; row < m ; row++)
        {
            for(int col1 = 0; col1 < n - 1; col1++)
            {
                if(mat[row][col1] == 0)
                continue;
                for(int col2 = col1+1; col2 < n; col2++)
                {
                    if(mat[row][col2] == 0)
                    continue;
                    
                    int num = ((col1+1)*10) + (col2+1);
                    if(mpp[num] > 0)
                    return true;
                    
                    else
                    mpp[num]++;
                    
                }
            }
        }
    return false;
    }
};