class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
       unordered_map<int,bool> visited;
       int n = adj.size();
       
       for(int i = 0; i < n; i++)
       visited[i] = false;
       vector<int> result;
       
       queue<int> que;
       que.push(0);
       visited[0] = true;
       
       while(!que.empty())
       {
           int root = que.front();
           result.push_back(root);
           que.pop();
           
           
           for(int edges : adj[root])
           {
               if(!visited[edges])
               {
                   que.push(edges);
                   visited[edges] = true;
               }
           }
           
       }
    return result;   
       
    }
};