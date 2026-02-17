class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        vector<int> open(n), close(n);
        
        for(int i = 0; i < n; i++){
            open[i] = arr[i][0];
            close[i]   = arr[i][1];
        }
        
        sort(open.begin(), open.end());
        sort(close.begin(), close.end());
        
        int count = 0, result = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            count++;
            while(j < n && close[j] < open[i]){
                count--;
                j++;
            }
            
            result = max(result,count);
        }
    return result;
    }
};
