class Solution {
  public:
    int count(int value, int m, int n)
    {
        int count = 0;
        for(int i = 1; i <= m; i++)
        count += min(value/i , n);
        
    return count;
    }
    
    int kthSmallest(int m, int n, int k) {
        // code here
        int start = 1;
        int end = m*n;
        
        while(start < end)
        {
            int mid = start + (end-start)/2;
            
            if(count(mid,m,n) < k)
            start = mid + 1;
            
            else
            end = mid;
        }
    return start;
    }
};
