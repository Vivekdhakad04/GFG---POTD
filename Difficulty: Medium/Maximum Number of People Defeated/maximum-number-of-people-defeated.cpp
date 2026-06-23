class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
         int low = 1, high = p;
        int result = 1;
        while(low <= high){
           int mid    = low + (high-low)/2;
           double preSum = (double)mid * (mid + 1) * (2 * mid + 1) /6;
           
           if(preSum > p){
               high = mid - 1;
           }
           else{
               result = mid;
               low = mid + 1;
           }
        }
    return result;
 
    }
};
