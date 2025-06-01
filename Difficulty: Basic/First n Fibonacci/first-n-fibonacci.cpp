// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> result;
        
        int prev = 0;
        result.push_back(prev);
        if(n == 1) return result;
        
        int curr = 1;
        result.push_back(curr);
        if(n == 2) return result;
        
        for(int i = 3; i <= n; i++)
        {
            int next = prev + curr;
            prev = curr;
            curr = next;
            result.push_back(curr);
        }
    return result;
        
    }
};