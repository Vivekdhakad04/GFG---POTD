class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxEle = 0;
        
        for(int& val : arr)
        maxEle = max(maxEle,val);
        
        vector<int> visited(maxEle+1,0);
        for(int& val : arr)
        visited[val] = 1;
        
        for(int a = 1; a <= maxEle; a++)
        {
            if(!visited[a]) continue;
            
            for(int b = 1; b <= maxEle; b++)
            {
                if(!visited[b]) continue;
                
                int c = sqrt(a*a + b*b);
                
                if(c* c != a*a + b*b || c > maxEle) continue;
                
                if(visited[c])
                return true;
            }
        }
    return false;
    }
};