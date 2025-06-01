// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n) {
        // code here
        int prev = 0;
        int curr = 1;
        
        if(n == 0) return prev;
        
        if(n == 1) return curr;
        
        for(int i = 2; i <= n; i++)
        {
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
    return curr;
        
    }
};