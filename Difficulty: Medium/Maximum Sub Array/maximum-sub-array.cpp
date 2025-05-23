// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int maxSum = arr[0] , maxEnd = arr[0];
        vector<int> result;
        int start = 0 , end = 0, low = 0, high = 0;
        
        for(int i = 1 ; i < arr.size(); i++)
        {
            if(arr[i] > maxEnd + arr[i])
            start = i;
            
            if(arr[i] >= 0)
            maxEnd = max(arr[i] , maxEnd + arr[i]);
            
            else
            maxEnd = arr[i];
            
            if(maxEnd >= maxSum)
            {
               maxSum =  maxEnd;
               low = start;
               high = i;
            }
        }
        
        if(maxSum < 0){
         result.push_back(-1);
        return result;
        }
        
        for(int i = low; i <= high; i++)
        result.push_back(arr[i]);
        
    return result;
    }
};