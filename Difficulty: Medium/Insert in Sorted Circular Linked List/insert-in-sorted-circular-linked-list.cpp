/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* temp = new Node(data);
        Node* ptr = head;
        
        if(ptr->data > temp->data)
        {
            while(ptr->next != head)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->next = head;
            return temp;
    
        }
        while(true)
        {
            if(ptr->data == temp->data || (temp->data > ptr->data && temp->data < ptr->next->data) || (temp->data > ptr->data && ptr->next->data < ptr->data))
            {
                temp->next = ptr->next;
                ptr->next = temp;
                return head;
            }
            ptr = ptr->next;
            
        }
        return head;
    }
};