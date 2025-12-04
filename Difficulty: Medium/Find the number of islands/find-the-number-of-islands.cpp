class Solution {
  public:
    bool isSafe(int i, int j, vector<vector<char>>& grid)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        return false;
        
    return true;
    }
    
    void bfs(int i, int j, vector<vector<char>>& grid,vector<vector<bool>>& visited)
    {
        queue<pair<int,int>> que;
        que.push({i,j});
        visited[i][j] = true;
        
        while(!que.empty())
        {
            pair<int,int> p = que.front();
            que.pop();
            i = p.first;
            j = p.second;
            for(int x = -1; x <= 1; x++)
            {
                for(int y = -1; y <=1; y++)
                {
                    if(x == 0 && y== 0)
                    continue;
                    
                    if(isSafe(i+x,j+y,grid) && !visited[i+x][j+y] && grid[i+x][j+y] == 'L')
                    {
                        visited[i+x][j+y] = true;
                        que.push({i+x,j+y});
                    }
                }
            }
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;
        vector<vector<bool>> visited(row, vector<bool>(col ,false));
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(!visited[i][j] && grid[i][j] == 'L')
                {
                    bfs(i,j,grid,visited);
                    count++;
                }
            }
        }
        return count;
    }
};