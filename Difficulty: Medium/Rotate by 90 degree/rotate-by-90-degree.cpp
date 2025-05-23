// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n = mat.size();
    //rotating the matrix in clockwise direction
    //take transpose and reverse the rows and done
    
    //transpose
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            swap(mat[i][j] , mat[j][i]);
        }
    }
    
    //reverse the rows
    for(int i = 0; i < n; i++)
    reverse(mat[i].begin(), mat[i].end());
}
