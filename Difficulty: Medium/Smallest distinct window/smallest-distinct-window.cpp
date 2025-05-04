//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        unordered_map<char,int> uMap;
        for(auto& ch : str)
        uMap[ch]++;
        
        int left = 0;
        int right = 0;
        int mini = str.length();
        unordered_map<char,int> uMap2;
        for(int i = 0; i < str.length(); i++)
        {
            uMap2[str[i]]++;
            while(uMap2.size() == uMap.size() && left <= i)
            {
                mini = min(mini,i-left+1);
                uMap2[str[left]]--;
                if(uMap2[str[left]] == 0)
                uMap2.erase(str[left]);
                
                left++;
            }
        }
    return mini;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends