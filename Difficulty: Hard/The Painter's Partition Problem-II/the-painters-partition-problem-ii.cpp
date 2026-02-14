class Solution {
  public:
    
    bool valid(vector<int>& arr, int key, int mid){
        int currSum = 0;
        for(int i = 0; i < arr.size(); i++){
            
            if((currSum + arr[i]) > mid){
                currSum = 0;
                key--;
            }
            
            if(key == 0) return false;
            currSum += arr[i];
        }
    return true;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        int low = 0;
        int high = 0;
        for(int i = 0; i < n; i++){
            high += arr[i];
            low = max(low, arr[i]);
        }
        
        while(low < high){
            int mid = low + (high-low)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
            if(valid(arr,k,mid)){
              high = mid; 
            }
            else{
                low = mid + 1;
            }
        }
    return high;    
    }
};