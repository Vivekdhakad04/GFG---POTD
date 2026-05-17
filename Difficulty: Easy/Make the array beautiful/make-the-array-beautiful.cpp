class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> result;
        int n = arr.size();
        int i = 0;
        
        if(n == 1){
            result.push_back(arr[0]);
            return result;
        }
        
        
        //negative -- left to right
        //positive -- right to left;
        stack<int> st;
        if(arr[0] < 0)
        int mul = -1;
        int a,b;
        while(i < n){
            
            if(arr[i]>=0) a= 1;
            else a = 0;
            if(!empty(st)){
                int num = st.top();
                if(num>= 0) b = 1;
                else b = 0;
            }
            else b = 0;
            
            if(empty(st)) 
            st.push(arr[i]);
            
            else{
                if((arr[i] >= 0 && st.top() >= 0) || arr[i] < 0 && st.top() < 0)
                st.push(arr[i]);
                
                else st.pop();
            }
        i++;
        }
        
        while(!empty(st)){
            int num = st.top();
            st.pop();
            result.push_back(num);
        }
    
        reverse(result.begin(), result.end());
        
    return result;
    }
        
};

        