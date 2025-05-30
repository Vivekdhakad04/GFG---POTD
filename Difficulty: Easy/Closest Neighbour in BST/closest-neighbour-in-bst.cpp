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
    void dfs(Node* root ,int k, int& neighbour)
    {
        if(root == NULL)
        return;
        
        if(root->data > neighbour && root->data <= k)
        neighbour = root->data;
        
        dfs(root->left,k,neighbour);
        dfs(root->right,k,neighbour);
    }
    int findMaxFork(Node* root, int k) {
        // code here
        int neighbour = -1;
        dfs(root,k,neighbour);
    return neighbour;
    }
};