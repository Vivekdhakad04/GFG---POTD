class Solution {
  public:
  
    bool bfs(int str, vector<vector<int>>& edges,unordered_map<int,vector<int>>& adj,unordered_map<int,int>& parent, vector<bool>& visited)
    {
        queue<int> que;
        que.push(str);
        visited[str] = true;
        
        while(!que.empty())
        {
            int val = que.front();
            que.pop();
            
            for(auto num : adj[val])
            {
                if(!visited[num])
                {
                   que.push(num);
                   parent[num] = val;
                   visited[num] = true;
                }
                
                else if(num != parent[val])
                return true;
                
            }
        }
    return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        unordered_map<int,vector<int>> adj;
        unordered_map<int,int> parent;
        vector<bool> visited(V,false);
        
        int n = edges.size();
        
        int i = 0;
        while( i  < n)
        {
            int first = edges[i][0];
            int second = edges[i][1];
            adj[first].push_back(second);
            adj[second].push_back(first);
            i++;
        }
        
       for(int i = 0; i < V; i++)
       {
           if(!visited[i])
           {
           if(bfs(i,edges,adj,parent,visited))
           return true;
           }
       }
        
        return false;
    }
};