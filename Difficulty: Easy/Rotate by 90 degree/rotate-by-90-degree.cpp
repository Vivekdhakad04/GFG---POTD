
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        //to rotate 90* anticlockwise
        // first take transpose then swap the first row by last row and so on..
        
        //transpose
        for(int i = 0; i < n; i++)
        {
            for(int j =i; j < n; j++ )
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        //now swap the rows
        int i = 0;
        while(i < n)
        {
            swap(mat[i] , mat[n-1]);
            i++;n--;
        }
    }
};
