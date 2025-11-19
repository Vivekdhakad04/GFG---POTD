class Solution {
  public:
  
    vector<int> helper(int root, vector<vector<int>>& adj, vector<int>& visited, vector<int>& result)
    {   
        visited[root] = 1;
        result.push_back(root);
        
        for(int edge : adj[root])
        {
            if(!visited[edge])
            {
                helper(edge,adj,visited,result);
            }
        }
    return result;
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> visited(n,0);
        
        int start = 0;
        vector<int> result;
        
        helper(start,adj,visited,result);
        
    return result;
    }
};