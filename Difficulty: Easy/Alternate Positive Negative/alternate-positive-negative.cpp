// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos,neg;
        for(int i = 0 ; i < arr.size(); i++)
        {
            if(arr[i] < 0)
            neg.push_back(arr[i]);
            
            else
            pos.push_back(arr[i]);
        }
        
        int i = 0;
        for(int j = 0; j < max(pos.size(),neg.size()); j++)
        {
            
            if(j < pos.size())
            {
                arr[i] = pos[j];
                i++;
            }
            if(j < neg.size())
            {
                arr[i] = neg[j];
                i++;
            }
        }
    }
};