class Solution {
  public:
  
    vector<int> helper(int n , vector<vector<int>>& edges,
    unordered_map<int,vector<pair<int,int>>>& adj, vector<int>& result,
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>& pq,
    int src)
    {
        pq.push({0,src});
        
        while(!pq.empty())
        {
            auto p = pq.top();
            int wt = p.first;
            int node = p.second;
            pq.pop();
            
            if(wt > result[node]) continue;
            for(auto& val : adj[node])
            {
                int dis = val.first;
                int des = val.second;
                if((wt + dis) < result[des])
                {
                    result[des] = wt + dis;
                    pq.push({wt+dis, des});
                }
            }
        }
    return result;
    }
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        int n = edges.size();
        unordered_map<int,vector<pair<int,int>>> adj;
        vector<int> result(V,INT_MAX);
        
        for(auto& e : edges)
        {
            int start = e[0];
            int end = e[1];
            int weight = e[2];
            
            //{weight,node}
            adj[start].push_back({weight,end});
            adj[end].push_back({weight,start});
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        result[src] = 0;
    return helper(n,edges,adj,result,pq,src);
        
    }
};