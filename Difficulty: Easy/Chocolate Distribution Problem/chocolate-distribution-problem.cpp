class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end());
        
        int left = 0, right = m-1;
        int ans = INT_MAX;
        while(right < n){
            int value = a[right] - a[left];
            ans = min(ans, value);
            left++; right++;
        }
    return ans;
    }
};