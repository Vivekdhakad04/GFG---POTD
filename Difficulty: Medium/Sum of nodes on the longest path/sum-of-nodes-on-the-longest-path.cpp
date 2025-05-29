/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void dfs(Node *root, int currLen, int& maxLen, int sum, int& maxSum)
    {
        if(root == NULL) 
        {
            if(currLen > maxLen)
            {
               maxSum = sum;
               maxLen = currLen;
            }
            
            else if(currLen == maxLen)
            maxSum = max(maxSum, sum);
            
        return;
        }
        
        sum += root->data;
        dfs(root->left, currLen+1,maxLen,sum,maxSum);
        dfs(root->right, currLen+1,maxLen,sum,maxSum);
        
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
    int maxLen = 0, maxSum = 0;
    dfs(root, 0,maxLen,0,maxSum);
    return maxSum;
    }
};