//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> result;
        int arrSum = 0;
        int actualSum = 0;
        int sqArrSum = 0;
        int sqActualSum = 0;
        
        for(int i = 0; i < n; i++)
        {
            arrSum += arr[i];
            actualSum += i+1;
            sqArrSum += (arr[i]*arr[i]);
            sqActualSum += ((i+1)*(i+1));
        }
        
        int sumDiff = arrSum - actualSum;
        int sqSumDiff = sqArrSum - sqActualSum;
        
        sqSumDiff /= sumDiff;
        int repeating = (sumDiff + sqSumDiff) / 2;
        int missing = repeating - sumDiff;
        
        result.push_back(repeating);
        result.push_back(missing);
    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends