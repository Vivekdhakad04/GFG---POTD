class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        sort(arr.begin(), arr.end());
        
        for(int i = 1; i < arr.size(); i++){
            int nextStart = arr[i][0];
            int prevEnd   = arr[i-1][1];
            
            if(prevEnd > nextStart)
            return false;
        }
    return true;
    }
};