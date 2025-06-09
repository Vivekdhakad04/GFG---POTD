/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
    bool helper(Node* root,int min, int max){
        if(root == NULL)
        return false;
        if(min + 1 == root->data && max-1 == root->data)
        return true;
       
        return (helper(root->left,min,root->data)) || (helper(root->right,root->data,max));
    }
    bool isDeadEnd(Node *root) {
        // Code here
        return helper(root,0,INT_MAX);
    }
};