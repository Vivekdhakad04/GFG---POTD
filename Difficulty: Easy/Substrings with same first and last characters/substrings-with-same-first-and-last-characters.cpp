//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        unordered_map<char,int> mpp;
        for(int i = 0; i < s.length(); i++)
        {
            mpp[s[i]]++;
        }
        
        int count = s.length();
        for(auto& pair : mpp)
        {
            int num = pair.second;
            int sum = ((num*(num+1))/ 2)- num;
            count += sum;
        }
    return count;
    }
};


//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends