class Solution {
  public:
    
    
    void dfs(int i, int j, vector<vector<bool>>& visited,int row, int col,vector<vector<char>>& grid){
        visited[i][j] = true;
        int x[] = {1,-1,0,0,1,1,-1,-1};
        int y[] = {0,0,1,-1,1,-1,1,-1};
        
        for(int k = 0; k < 8; k++){
            int nx = i + x[k];
            int ny = j + y[k];
            
            if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] == 'L' && !visited[nx][ny])
            dfs(nx,ny,visited,row,col,grid);
        }
    }
    
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>> visited(row,vector<bool>(col, false));
        
        int island = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 'L' && !visited[i][j]){
                    island++;
                    dfs(i,j,visited,row,col,grid);
                }
            }
        }
    return island;
    }
};