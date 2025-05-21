// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int m = mat.size();
        int n = mat[0].size();
        
        int i = 0, j = n-1;
        while(i < m && j >= 0)
        {
            if(mat[i][j] == x)
            return true;
            
            else if(mat[i][j] > x)
            j--;
            
            else
            i++;
        }
    return false;
    }
};